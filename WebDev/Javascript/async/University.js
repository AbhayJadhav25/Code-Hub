let url = "https://universities.hipolabs.com/search?name=india";

async function getUniversities() {
  try {
    let res = await axios.get(url);
    console.log(res.data);
  } catch (err) {
    console.log("Not Found - ", err.message);
  }
}

getUniversities();
