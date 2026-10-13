package ij;

import java.nio.charset.Charset;

/* loaded from: classes3.dex */
public final class c0 {

    /* renamed from: b, reason: collision with root package name */
    public static final o f10844b = new o(1);
    public final b0 a;

    public c0() {
        h0 h0Var;
        try {
            h0Var = (h0) Class.forName("com.google.protobuf.DescriptorMessageInfoFactory").getDeclaredMethod("getInstance", null).invoke(null, null);
        } catch (Exception unused) {
            h0Var = f10844b;
        }
        h0[] h0VarArr = {o.f10909b, h0Var};
        b0 b0Var = new b0();
        b0Var.a = h0VarArr;
        Charset charset = t.a;
        this.a = b0Var;
    }
}
