package ls;

import java.util.Collections;
import java.util.HashMap;

/* loaded from: classes3.dex */
public abstract class d extends ks.a {
    static {
        HashMap hashMap = new HashMap();
        hashMap.put("YEAR_OF_DISPLAY", "L_year");
        hashMap.put("MONTH_AS_NUMBER", "L_month");
        hashMap.put("HOUR_FROM_0_TO_24", "L_hour");
        hashMap.put("DAY_OF_MONTH", "L_day");
        hashMap.put("DAY_OF_DIVISION", "L_day");
        Collections.unmodifiableMap(hashMap);
    }
}
