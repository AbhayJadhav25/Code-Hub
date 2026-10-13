var app = angular.module('myApp', []);

app.controller('myCtrl', function($scope) {
    $scope.student = {};
    $scope.submitted = false;

    $scope.register = function(form) {
        if (form.$valid) {
            $scope.submitted = true;
        }
    };
});