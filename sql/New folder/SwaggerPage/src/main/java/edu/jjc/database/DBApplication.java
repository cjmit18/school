package edu.jjc.database;

import org.springframework.boot.SpringApplication;
import org.springframework.boot.autoconfigure.SpringBootApplication;
import springfox.documentation.swagger2.annotations.EnableSwagger2;

@SpringBootApplication(
        scanBasePackages = {
                "edu.jjc.database",
        }
)

@EnableSwagger2
public class DBApplication {

    public static void main(String[] args){
        SpringApplication.run(DBApplication.class, args);

    }

}
