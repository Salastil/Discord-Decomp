package com.google.firebase.datatransport;

import android.content.Context;
import androidx.annotation.Keep;
import androidx.annotation.NonNull;
import com.google.firebase.components.ComponentRegistrar;
import hc.s0;
import java.util.Arrays;
import java.util.HashSet;
import java.util.List;
import n1.k;
import ni.b;
import ni.c;
import ni.i;
import ni.q;
import tb.f;
import ub.a;
import wb.p;
import zo.c0;

@Keep
/* loaded from: classes3.dex */
public class TransportRegistrar implements ComponentRegistrar {
    private static final String LIBRARY_NAME = "fire-transport";

    /* JADX INFO: Access modifiers changed from: private */
    public static /* synthetic */ f lambda$getComponents$0(c cVar) {
        p.b((Context) cVar.b(Context.class));
        return p.a().c(a.f18821f);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static /* synthetic */ f lambda$getComponents$1(c cVar) {
        p.b((Context) cVar.b(Context.class));
        return p.a().c(a.f18821f);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static /* synthetic */ f lambda$getComponents$2(c cVar) {
        p.b((Context) cVar.b(Context.class));
        return p.a().c(a.f18820e);
    }

    @Override // com.google.firebase.components.ComponentRegistrar
    @NonNull
    public List<b> getComponents() {
        HashSet hashSet = new HashSet();
        HashSet hashSet2 = new HashSet();
        HashSet hashSet3 = new HashSet();
        hashSet.add(q.a(f.class));
        for (Class cls : new Class[0]) {
            c0.h(cls, "Null interface");
            hashSet.add(q.a(cls));
        }
        i a = i.a(Context.class);
        if (hashSet.contains(a.a)) {
            throw new IllegalArgumentException("Components are not allowed to depend on interfaces they themselves provide.");
        }
        hashSet2.add(a);
        b bVar = new b(LIBRARY_NAME, new HashSet(hashSet), new HashSet(hashSet2), 0, 0, new k(20), hashSet3);
        s0 a10 = b.a(new q(pi.a.class, f.class));
        a10.a(i.a(Context.class));
        a10.f9867f = new k(21);
        b b10 = a10.b();
        s0 a11 = b.a(new q(pi.b.class, f.class));
        a11.a(i.a(Context.class));
        a11.f9867f = new k(22);
        return Arrays.asList(bVar, b10, a11.b(), zk.a.f(LIBRARY_NAME, "18.2.0"));
    }
}
