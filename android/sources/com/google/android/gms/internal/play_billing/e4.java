package com.google.android.gms.internal.play_billing;

import android.os.Build;
import androidx.recyclerview.widget.RecyclerView;
import com.facebook.react.fabric.mounting.mountitems.IntBufferBatchMountItem;

/* loaded from: classes3.dex */
public final class e4 extends e2 {
    private static final e4 zzb;
    private int zzd;
    private int zzh;
    private long zzi;
    private long zzj;
    private boolean zzk;
    private int zzl;
    private int zzm;
    private long zzn;
    private int zzs;
    private String zze = "";
    private String zzf = "";
    private String zzg = "";
    private String zzo = "";
    private String zzp = "";
    private String zzq = "";
    private String zzr = "";

    static {
        e4 e4Var = new e4();
        zzb = e4Var;
        e2.f(e4.class, e4Var);
    }

    public static /* synthetic */ void A(e4 e4Var, String str) {
        e4Var.zzd |= 2;
        e4Var.zzf = str;
    }

    public static d4 B() {
        return (d4) zzb.k();
    }

    public static /* synthetic */ void C(e4 e4Var, int i5) {
        e4Var.zzd |= IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
        e4Var.zzl = i5;
    }

    public static /* synthetic */ void D(e4 e4Var, int i5) {
        e4Var.zzd |= IntBufferBatchMountItem.INSTRUCTION_UPDATE_EVENT_EMITTER;
        e4Var.zzm = i5;
    }

    public static /* synthetic */ void E(e4 e4Var, int i5) {
        e4Var.zzd |= 8;
        e4Var.zzh = i5;
    }

    public static /* synthetic */ void F(e4 e4Var, long j) {
        e4Var.zzd |= 16;
        e4Var.zzi = j;
    }

    public static /* synthetic */ void G(e4 e4Var, long j) {
        e4Var.zzd |= 32;
        e4Var.zzj = j;
    }

    public static /* synthetic */ void r(e4 e4Var) {
        e4Var.zzd |= IntBufferBatchMountItem.INSTRUCTION_UPDATE_PADDING;
        e4Var.zzn = 926300087L;
    }

    public static /* synthetic */ void s(e4 e4Var, String str) {
        str.getClass();
        e4Var.zzd |= 4;
        e4Var.zzg = str;
    }

    public static /* synthetic */ void t(e4 e4Var) {
        String str = Build.BRAND;
        str.getClass();
        e4Var.zzd |= IntBufferBatchMountItem.INSTRUCTION_UPDATE_OVERFLOW_INSET;
        e4Var.zzo = str;
    }

    public static /* synthetic */ void u(e4 e4Var) {
        String str = Build.FINGERPRINT;
        str.getClass();
        e4Var.zzd |= 8192;
        e4Var.zzr = str;
    }

    public static /* synthetic */ void v(e4 e4Var) {
        String str = Build.MANUFACTURER;
        str.getClass();
        e4Var.zzd |= RecyclerView.ItemAnimator.FLAG_APPEARED_IN_PRE_LAYOUT;
        e4Var.zzq = str;
    }

    public static /* synthetic */ void w(e4 e4Var) {
        String str = Build.MODEL;
        str.getClass();
        e4Var.zzd |= RecyclerView.ItemAnimator.FLAG_MOVED;
        e4Var.zzp = str;
    }

    public static /* synthetic */ void x(e4 e4Var, int i5) {
        e4Var.zzd |= 16384;
        e4Var.zzs = i5;
    }

    public static /* synthetic */ void y(e4 e4Var) {
        e4Var.zzd |= 64;
        e4Var.zzk = false;
    }

    public static /* synthetic */ void z(e4 e4Var) {
        e4Var.zzd |= 1;
        e4Var.zze = z4.a.a;
    }

    @Override // com.google.android.gms.internal.play_billing.e2
    public final Object j(int i5) {
        int i6 = i5 - 1;
        if (i6 == 0) {
            return (byte) 1;
        }
        if (i6 == 2) {
            return new x2(zzb, "\u0004\u000f\u0000\u0001\u0001\u000f\u000f\u0000\u0000\u0000\u0001ဈ\u0000\u0002ဈ\u0002\u0003င\u0003\u0004ဂ\u0004\u0005ဈ\u0001\u0006ဂ\u0005\u0007ဇ\u0006\bင\u0007\tင\b\nဂ\t\u000bဈ\n\fဈ\u000b\rဈ\f\u000eဈ\r\u000fင\u000e", new Object[]{"zzd", "zze", "zzg", "zzh", "zzi", "zzf", "zzj", "zzk", "zzl", "zzm", "zzn", "zzo", "zzp", "zzq", "zzr", "zzs"});
        }
        if (i6 == 3) {
            return new e4();
        }
        if (i6 == 4) {
            return new d4(zzb);
        }
        if (i6 == 5) {
            return zzb;
        }
        throw null;
    }
}
