package com.google.android.gms.fido.fido2.api.common;

import a3.e;
import android.os.Parcel;
import android.os.Parcelable;
import androidx.annotation.NonNull;
import cf.a;
import java.util.Arrays;
import rf.i0;
import rf.m0;
import rf.n0;
import rf.o0;
import rf.p0;
import rf.q0;
import rf.r;
import rf.r0;
import rf.s;
import rf.s0;
import rf.t;
import rf.x0;
import rf.y0;
import rf.z0;
import ys.l;

/* loaded from: classes3.dex */
public final class AuthenticationExtensions extends a {

    @NonNull
    public static final Parcelable.Creator<AuthenticationExtensions> CREATOR = new s0(8);
    public final o0 E;
    public final s F;
    public final q0 G;
    public final r0 H;
    public final p0 I;
    public final t J;

    /* renamed from: d, reason: collision with root package name */
    public final r f5663d;

    /* renamed from: e, reason: collision with root package name */
    public final x0 f5664e;

    /* renamed from: i, reason: collision with root package name */
    public final i0 f5665i;

    /* renamed from: v, reason: collision with root package name */
    public final z0 f5666v;

    /* renamed from: w, reason: collision with root package name */
    public final m0 f5667w;

    /* renamed from: x, reason: collision with root package name */
    public final n0 f5668x;

    /* renamed from: y, reason: collision with root package name */
    public final y0 f5669y;

    public AuthenticationExtensions(r rVar, x0 x0Var, i0 i0Var, z0 z0Var, m0 m0Var, n0 n0Var, y0 y0Var, o0 o0Var, s sVar, q0 q0Var, r0 r0Var, p0 p0Var, t tVar) {
        this.f5663d = rVar;
        this.f5665i = i0Var;
        this.f5664e = x0Var;
        this.f5666v = z0Var;
        this.f5667w = m0Var;
        this.f5668x = n0Var;
        this.f5669y = y0Var;
        this.E = o0Var;
        this.F = sVar;
        this.G = q0Var;
        this.H = r0Var;
        this.I = p0Var;
        this.J = tVar;
    }

    public final boolean equals(Object obj) {
        if (!(obj instanceof AuthenticationExtensions)) {
            return false;
        }
        AuthenticationExtensions authenticationExtensions = (AuthenticationExtensions) obj;
        return bf.t.j(this.f5663d, authenticationExtensions.f5663d) && bf.t.j(this.f5664e, authenticationExtensions.f5664e) && bf.t.j(this.f5665i, authenticationExtensions.f5665i) && bf.t.j(this.f5666v, authenticationExtensions.f5666v) && bf.t.j(this.f5667w, authenticationExtensions.f5667w) && bf.t.j(this.f5668x, authenticationExtensions.f5668x) && bf.t.j(this.f5669y, authenticationExtensions.f5669y) && bf.t.j(this.E, authenticationExtensions.E) && bf.t.j(this.F, authenticationExtensions.F) && bf.t.j(this.G, authenticationExtensions.G) && bf.t.j(this.H, authenticationExtensions.H) && bf.t.j(this.I, authenticationExtensions.I) && bf.t.j(this.J, authenticationExtensions.J);
    }

    public final int hashCode() {
        return Arrays.hashCode(new Object[]{this.f5663d, this.f5664e, this.f5665i, this.f5666v, this.f5667w, this.f5668x, this.f5669y, this.E, this.F, this.G, this.H, this.I, this.J});
    }

    public final String toString() {
        String valueOf = String.valueOf(this.f5663d);
        String valueOf2 = String.valueOf(this.f5664e);
        String valueOf3 = String.valueOf(this.f5665i);
        String valueOf4 = String.valueOf(this.f5666v);
        String valueOf5 = String.valueOf(this.f5667w);
        String valueOf6 = String.valueOf(this.f5668x);
        String valueOf7 = String.valueOf(this.f5669y);
        String valueOf8 = String.valueOf(this.E);
        String valueOf9 = String.valueOf(this.F);
        String valueOf10 = String.valueOf(this.G);
        String valueOf11 = String.valueOf(this.H);
        String valueOf12 = String.valueOf(this.J);
        StringBuilder t5 = e.t("AuthenticationExtensions{\n fidoAppIdExtension=", valueOf, ", \n cableAuthenticationExtension=", valueOf2, ", \n userVerificationMethodExtension=");
        e.A(t5, valueOf3, ", \n googleMultiAssertionExtension=", valueOf4, ", \n googleSessionIdExtension=");
        e.A(t5, valueOf5, ", \n googleSilentVerificationExtension=", valueOf6, ", \n devicePublicKeyExtension=");
        e.A(t5, valueOf7, ", \n googleTunnelServerIdExtension=", valueOf8, ", \n googleThirdPartyPaymentExtension=");
        e.A(t5, valueOf9, ", \n prfExtension=", valueOf10, ", \n simpleTransactionAuthorizationExtension=");
        return com.discord.chat.bridge.botuikit.a.k(t5, valueOf11, ", \n paymentExtension=", valueOf12, "}");
    }

    @Override // android.os.Parcelable
    public final void writeToParcel(Parcel parcel, int i5) {
        int I = l.I(20293, parcel);
        l.C(parcel, 2, this.f5663d, i5);
        l.C(parcel, 3, this.f5664e, i5);
        l.C(parcel, 4, this.f5665i, i5);
        l.C(parcel, 5, this.f5666v, i5);
        l.C(parcel, 6, this.f5667w, i5);
        l.C(parcel, 7, this.f5668x, i5);
        l.C(parcel, 8, this.f5669y, i5);
        l.C(parcel, 9, this.E, i5);
        l.C(parcel, 10, this.F, i5);
        l.C(parcel, 11, this.G, i5);
        l.C(parcel, 12, this.H, i5);
        l.C(parcel, 13, this.I, i5);
        l.C(parcel, 14, this.J, i5);
        l.J(I, parcel);
    }
}
