package io.sentry;

/* loaded from: classes3.dex */
public interface ISpan {
    l6 a();

    n6 b();

    ISpan c(String str, i4 i4Var, k1 k1Var);

    void e(Number number, String str);

    void f(l6 l6Var);

    void g();

    String getDescription();

    void h(Object obj, String str);

    boolean isFinished();

    void j(String str);

    ISpan l(String str);

    void makeCurrent();

    void n(String str, Long l6, c2 c2Var);

    i6 o();

    i4 p();

    void q(l6 l6Var, i4 i4Var);

    ISpan r(String str, String str2, i4 i4Var, k1 k1Var, a3.f fVar);

    i4 s();
}
