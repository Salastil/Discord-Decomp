package androidx.datastore.preferences.protobuf;

import java.nio.charset.Charset;

/* loaded from: classes.dex */
public final class f0 {

    /* renamed from: b, reason: collision with root package name */
    public static final q f1745b = new q(1);
    public final Object a;

    public f0(j jVar) {
        v.a(jVar, "output");
        this.a = jVar;
        jVar.f1767c = this;
    }

    public void a(int i5, f fVar) {
        ((j) this.a).G(i5, fVar);
    }

    public void b(int i5, Object obj, w0 w0Var) {
        j jVar = (j) this.a;
        jVar.R(i5, 3);
        w0Var.d((a) obj, jVar.f1767c);
        jVar.R(i5, 4);
    }

    public f0() {
        l0 l0Var;
        try {
            l0Var = (l0) Class.forName("androidx.datastore.preferences.protobuf.DescriptorMessageInfoFactory").getDeclaredMethod("getInstance", null).invoke(null, null);
        } catch (Exception unused) {
            l0Var = f1745b;
        }
        l0[] l0VarArr = {q.f1807b, l0Var};
        e0 e0Var = new e0();
        e0Var.a = l0VarArr;
        Charset charset = v.a;
        this.a = e0Var;
    }
}
