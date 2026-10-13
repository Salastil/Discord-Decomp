package com.google.firebase;

import android.content.Context;
import android.os.Build;
import com.google.firebase.components.ComponentRegistrar;
import com.google.firebase.messaging.m;
import com.google.firebase.messaging.n;
import fo.k;
import gj.a;
import gj.b;
import hc.s0;
import java.util.ArrayList;
import java.util.HashSet;
import java.util.List;
import java.util.concurrent.Executor;
import ki.g;
import ni.i;
import ni.q;
import wi.c;
import wi.d;
import wi.e;
import wi.f;
import zo.c0;

/* loaded from: classes3.dex */
public class FirebaseCommonRegistrar implements ComponentRegistrar {
    public static String a(String str) {
        return str.replace(' ', '_').replace('/', '_');
    }

    @Override // com.google.firebase.components.ComponentRegistrar
    public final List getComponents() {
        String str;
        ArrayList arrayList = new ArrayList();
        HashSet hashSet = new HashSet();
        HashSet hashSet2 = new HashSet();
        HashSet hashSet3 = new HashSet();
        hashSet.add(q.a(b.class));
        for (Class cls : new Class[0]) {
            c0.h(cls, "Null interface");
            hashSet.add(q.a(cls));
        }
        i iVar = new i(2, 0, a.class);
        if (hashSet.contains(iVar.a)) {
            throw new IllegalArgumentException("Components are not allowed to depend on interfaces they themselves provide.");
        }
        hashSet2.add(iVar);
        arrayList.add(new ni.b(null, new HashSet(hashSet), new HashSet(hashSet2), 0, 0, new m(16), hashSet3));
        q qVar = new q(mi.a.class, Executor.class);
        s0 s0Var = new s0(c.class, new Class[]{e.class, f.class});
        s0Var.a(i.a(Context.class));
        s0Var.a(i.a(g.class));
        s0Var.a(new i(2, 0, d.class));
        s0Var.a(new i(1, 1, b.class));
        s0Var.a(new i(qVar, 1, 0));
        s0Var.f9867f = new n(qVar, 1);
        arrayList.add(s0Var.b());
        arrayList.add(zk.a.f("fire-android", String.valueOf(Build.VERSION.SDK_INT)));
        arrayList.add(zk.a.f("fire-core", "21.0.0"));
        arrayList.add(zk.a.f("device-name", a(Build.PRODUCT)));
        arrayList.add(zk.a.f("device-model", a(Build.DEVICE)));
        arrayList.add(zk.a.f("device-brand", a(Build.BRAND)));
        arrayList.add(zk.a.p("android-target-sdk", new io.sentry.util.m(4)));
        arrayList.add(zk.a.p("android-min-sdk", new io.sentry.util.m(5)));
        arrayList.add(zk.a.p("android-platform", new io.sentry.util.m(6)));
        arrayList.add(zk.a.p("android-installer", new io.sentry.util.m(7)));
        try {
            str = k.f8820x.toString();
        } catch (NoClassDefFoundError unused) {
            str = null;
        }
        if (str != null) {
            arrayList.add(zk.a.f("kotlin", str));
        }
        return arrayList;
    }
}
