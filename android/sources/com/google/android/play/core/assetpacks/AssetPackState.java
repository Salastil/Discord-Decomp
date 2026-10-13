package com.google.android.play.core.assetpacks;

import a5.k0;
import android.os.Bundle;
import th.g1;
import th.p0;
import th.q;
import th.w;

/* loaded from: classes3.dex */
public abstract class AssetPackState {
    public static w a(String str, int i5, int i6, long j, long j5, double d6, int i10, String str2, String str3) {
        return new w(str, i5, i6, j, j5, (int) Math.rint(100.0d * d6), i10, str2, str3);
    }

    public static w d(Bundle bundle, String str, p0 p0Var, g1 g1Var, q qVar) {
        int f2 = qVar.f(bundle.getInt(k0.b("status", str)));
        int i5 = bundle.getInt(k0.b("error_code", str));
        long j = bundle.getLong(k0.b("bytes_downloaded", str));
        long j5 = bundle.getLong(k0.b("total_bytes_to_download", str));
        double a = p0Var.a(str);
        long j7 = bundle.getLong(k0.b("pack_version", str));
        long j10 = bundle.getLong(k0.b("pack_base_version", str));
        int i6 = 1;
        if (f2 == 4) {
            if (j10 != 0 && j10 != j7) {
                i6 = 2;
            }
            f2 = 4;
        }
        return a(str, f2, i5, j, j5, a, i6, bundle.getString(k0.b("pack_version_tag", str), String.valueOf(bundle.getInt("app_version_code"))), g1Var.a(str));
    }

    public abstract String b();

    public abstract long c();

    public abstract int e();

    public abstract String f();

    public abstract String g();

    public abstract int h();

    public abstract long i();

    public abstract int j();

    public abstract int k();
}
