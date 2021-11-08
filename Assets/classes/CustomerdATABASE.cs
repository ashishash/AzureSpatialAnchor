using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CustomerdATABASE : MonoBehaviour
{
    public customer[] customerLIst;
    public customer deepika;
    // Start is called before the first frame update
    void Start()
    {
        deepika = new customer("visala ", "deepika", 26, "female", "LIfe Partner");
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
