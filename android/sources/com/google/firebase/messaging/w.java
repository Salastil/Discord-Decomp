package com.google.firebase.messaging;

import android.text.TextUtils;
import java.lang.ref.WeakReference;
import java.util.ArrayDeque;
import java.util.regex.Pattern;

/* loaded from: classes3.dex */
public final class w {

    /* renamed from: b, reason: collision with root package name */
    public static WeakReference f6275b;
    public p9.c a;

    public final synchronized v a() {
        String str;
        v vVar;
        p9.c cVar = this.a;
        synchronized (((ArrayDeque) cVar.f16326v)) {
            str = (String) ((ArrayDeque) cVar.f16326v).peek();
        }
        Pattern pattern = v.f6272d;
        vVar = null;
        if (!TextUtils.isEmpty(str)) {
            String[] split = str.split("!", -1);
            if (split.length == 2) {
                vVar = new v(split[0], split[1]);
            }
        }
        return vVar;
    }
}
