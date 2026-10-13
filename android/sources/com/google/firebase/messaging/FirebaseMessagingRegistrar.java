package com.google.firebase.messaging;

import androidx.annotation.Keep;
import com.google.firebase.components.ComponentRegistrar;
import hc.s0;
import java.util.Arrays;
import java.util.List;

@Keep
/* loaded from: classes3.dex */
public class FirebaseMessagingRegistrar implements ComponentRegistrar {
    private static final String LIBRARY_NAME = "fire-fcm";

    /* JADX INFO: Access modifiers changed from: private */
    public static /* synthetic */ FirebaseMessaging lambda$getComponents$0(ni.q qVar, ni.c cVar) {
        ki.g gVar = (ki.g) cVar.b(ki.g.class);
        if (cVar.b(xi.a.class) == null) {
            return new FirebaseMessaging(gVar, cVar.e(gj.b.class), cVar.e(wi.f.class), (zi.d) cVar.b(zi.d.class), cVar.f(qVar), (vi.b) cVar.b(vi.b.class));
        }
        throw new ClassCastException();
    }

    @Override // com.google.firebase.components.ComponentRegistrar
    @Keep
    public List<ni.b> getComponents() {
        ni.q qVar = new ni.q(pi.b.class, tb.f.class);
        s0 s0Var = new s0(FirebaseMessaging.class, new Class[0]);
        s0Var.a = LIBRARY_NAME;
        s0Var.a(ni.i.a(ki.g.class));
        s0Var.a(new ni.i(0, 0, xi.a.class));
        s0Var.a(new ni.i(0, 1, gj.b.class));
        s0Var.a(new ni.i(0, 1, wi.f.class));
        s0Var.a(ni.i.a(zi.d.class));
        s0Var.a(new ni.i(qVar, 0, 1));
        s0Var.a(ni.i.a(vi.b.class));
        s0Var.f9867f = new n(qVar, 0);
        if (!(s0Var.f9863b == 0)) {
            throw new IllegalStateException("Instantiation type has already been set.");
        }
        s0Var.f9863b = 1;
        return Arrays.asList(s0Var.b(), zk.a.f(LIBRARY_NAME, "24.0.0"));
    }
}
