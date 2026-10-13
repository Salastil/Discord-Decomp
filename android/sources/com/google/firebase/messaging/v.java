package com.google.firebase.messaging;

import android.util.Log;
import java.util.Arrays;
import java.util.regex.Pattern;

/* loaded from: classes3.dex */
public final class v {

    /* renamed from: d, reason: collision with root package name */
    public static final Pattern f6272d = Pattern.compile("[a-zA-Z0-9-_.~%]{1,900}");
    public final String a;

    /* renamed from: b, reason: collision with root package name */
    public final String f6273b;

    /* renamed from: c, reason: collision with root package name */
    public final String f6274c;

    public v(String str, String str2) {
        String str3;
        if (str2 == null || !str2.startsWith("/topics/")) {
            str3 = str2;
        } else {
            Log.w("FirebaseMessaging", "Format /topics/topic-name is deprecated. Only 'topic-name' should be used in " + str + ".");
            str3 = str2.substring(8);
        }
        if (str3 == null || !f6272d.matcher(str3).matches()) {
            throw new IllegalArgumentException(s4.h.f("Invalid topic name: ", str3, " does not match the allowed format [a-zA-Z0-9-_.~%]{1,900}."));
        }
        this.a = str3;
        this.f6273b = str;
        this.f6274c = k0.d.l(str, "!", str2);
    }

    public final boolean equals(Object obj) {
        if (!(obj instanceof v)) {
            return false;
        }
        v vVar = (v) obj;
        return this.a.equals(vVar.a) && this.f6273b.equals(vVar.f6273b);
    }

    public final int hashCode() {
        return Arrays.hashCode(new Object[]{this.f6273b, this.a});
    }
}
