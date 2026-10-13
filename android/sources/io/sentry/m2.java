package io.sentry;

import java.util.ArrayDeque;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.Map;
import java.util.Queue;

/* loaded from: classes3.dex */
public final class m2 implements IScope {

    /* renamed from: b, reason: collision with root package name */
    public static final m2 f11667b = new m2();
    public final io.sentry.util.e a = new io.sentry.util.e(new i7.a(9));

    @Override // io.sentry.IScope
    public final g6 A(n3 n3Var) {
        return null;
    }

    @Override // io.sentry.IScope
    public final void B(String str) {
    }

    @Override // io.sentry.IScope
    public final z0 C() {
        return q2.a;
    }

    @Override // io.sentry.IScope
    public final Map D() {
        return new HashMap();
    }

    @Override // io.sentry.IScope
    public final void E() {
    }

    @Override // io.sentry.IScope
    public final List F() {
        return new ArrayList();
    }

    @Override // io.sentry.IScope
    public final List H() {
        return new ArrayList();
    }

    @Override // io.sentry.IScope
    public final void I(SentryEvent sentryEvent) {
    }

    @Override // io.sentry.IScope
    public final io.sentry.protocol.c J() {
        return new io.sentry.protocol.c();
    }

    @Override // io.sentry.IScope
    public final void K() {
    }

    @Override // io.sentry.IScope
    public final e4.m L(m3 m3Var) {
        return new e4.m(25);
    }

    @Override // io.sentry.IScope
    public final void M(o3 o3Var) {
    }

    @Override // io.sentry.IScope
    public final void N(io.sentry.protocol.v vVar) {
    }

    @Override // io.sentry.IScope
    public final void O(f1 f1Var) {
    }

    @Override // io.sentry.IScope
    public final List P() {
        return new ArrayList();
    }

    @Override // io.sentry.IScope
    public final io.sentry.protocol.h0 Q() {
        return null;
    }

    @Override // io.sentry.IScope
    public final io.sentry.protocol.p R() {
        return null;
    }

    @Override // io.sentry.IScope
    public final List S() {
        return new ArrayList();
    }

    @Override // io.sentry.IScope
    public final String T() {
        return null;
    }

    @Override // io.sentry.IScope
    public final String a() {
        return null;
    }

    @Override // io.sentry.IScope
    public final void c(Breadcrumb breadcrumb) {
    }

    @Override // io.sentry.IScope
    public final void clear() {
    }

    @Override // io.sentry.IScope
    /* renamed from: clone */
    public final IScope m1294clone() {
        return f11667b;
    }

    @Override // io.sentry.IScope
    public final void f(String str, String str2) {
    }

    @Override // io.sentry.IScope
    public final void g(Breadcrumb breadcrumb, Hint hint) {
    }

    @Override // io.sentry.IScope
    public final Map getExtras() {
        return new HashMap();
    }

    @Override // io.sentry.IScope
    public final io.sentry.protocol.h h() {
        return null;
    }

    @Override // io.sentry.IScope
    public final void i(List list) {
    }

    @Override // io.sentry.IScope
    public final void j(String str, String str2) {
    }

    @Override // io.sentry.IScope
    public final void k(io.sentry.protocol.v vVar) {
    }

    @Override // io.sentry.IScope
    public final v5 l() {
        return (v5) this.a.a();
    }

    @Override // io.sentry.IScope
    public final void m(io.sentry.protocol.h0 h0Var) {
    }

    @Override // io.sentry.IScope
    public final f1 n() {
        return null;
    }

    @Override // io.sentry.IScope
    public final g6 o() {
        return null;
    }

    @Override // io.sentry.IScope
    public final e4.r p() {
        return null;
    }

    @Override // io.sentry.IScope
    public final void r() {
    }

    @Override // io.sentry.IScope
    public final io.sentry.featureflags.b s() {
        return io.sentry.featureflags.c.f11553d;
    }

    @Override // io.sentry.IScope
    public final ISpan t() {
        return null;
    }

    @Override // io.sentry.IScope
    public final void u(String str) {
    }

    @Override // io.sentry.IScope
    public final g6 v() {
        return null;
    }

    @Override // io.sentry.IScope
    public final Queue w() {
        return new ArrayDeque();
    }

    @Override // io.sentry.IScope
    public final SentryLevel x() {
        return null;
    }

    @Override // io.sentry.IScope
    public final io.sentry.protocol.v y() {
        return io.sentry.protocol.v.f11895e;
    }

    @Override // io.sentry.IScope
    public final e4.m z() {
        return new e4.m(25);
    }

    /* renamed from: clone, reason: collision with other method in class */
    public final Object m1296clone() {
        return f11667b;
    }

    @Override // io.sentry.IScope
    public final void q(e4.m mVar) {
    }

    @Override // io.sentry.IScope
    public final void G(Object obj, String str) {
    }
}
