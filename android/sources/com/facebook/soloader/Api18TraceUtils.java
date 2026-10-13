package com.facebook.soloader;

import android.annotation.TargetApi;
import android.os.Trace;

@TargetApi(18)
@f
/* loaded from: classes3.dex */
class Api18TraceUtils {
    public static void a(String str, String str2, String str3) {
        String l6 = k0.d.l(str, str2, str3);
        if (l6.length() > 127 && str2 != null) {
            int length = (127 - str.length()) - str3.length();
            StringBuilder o6 = k0.d.o(str);
            o6.append(str2.substring(0, length));
            o6.append(str3);
            l6 = o6.toString();
        }
        Trace.beginSection(l6);
    }
}
