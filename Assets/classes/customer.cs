using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[System.Serializable]
public class customer 
{
    public string firstName;
    public string lastName;
    public int age;
    public string Gender;
    public string Occupation;

    public customer(string firstname, string lastname, int age, string gender, string occupation)
    {
        this.firstName = firstname;
        this.lastName = lastname;
        this.age = age;
        this.Gender = gender;
        this.Occupation = occupation;
    }
}
