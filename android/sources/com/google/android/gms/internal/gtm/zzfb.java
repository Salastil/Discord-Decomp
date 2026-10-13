package com.google.android.gms.internal.gtm;

import bf.t;
import com.facebook.react.fabric.mounting.mountitems.IntBufferBatchMountItem;
import com.google.android.gms.common.util.VisibleForTesting;
import k0.d;

/* loaded from: classes3.dex */
public final class zzfb extends zzbs {
    private static zzfb zza;

    public zzfb(zzbv zzbvVar) {
        super(zzbvVar);
    }

    public static zzfb zza() {
        return zza;
    }

    @VisibleForTesting
    public static final String zzf(Object obj) {
        if (obj == null) {
            return null;
        }
        if (obj instanceof Integer) {
            obj = Long.valueOf(((Integer) obj).intValue());
        }
        if (!(obj instanceof Long)) {
            return obj instanceof Boolean ? String.valueOf(obj) : obj instanceof Throwable ? obj.getClass().getCanonicalName() : "-";
        }
        Long l6 = (Long) obj;
        if (Math.abs(l6.longValue()) < 100) {
            return String.valueOf(obj);
        }
        String str = String.valueOf(obj).charAt(0) != '-' ? "" : "-";
        String valueOf = String.valueOf(Math.abs(l6.longValue()));
        StringBuilder o6 = d.o(str);
        o6.append(Math.round(Math.pow(10.0d, valueOf.length() - 1)));
        o6.append("...");
        o6.append(str);
        o6.append(Math.round(Math.pow(10.0d, valueOf.length()) - 1.0d));
        return o6.toString();
    }

    public final void zzb(zzex zzexVar, String str) {
        zzS(str.length() != 0 ? "Discarding hit. ".concat(str) : new String("Discarding hit. "), zzexVar != null ? zzexVar.toString() : "no hit data");
    }

    @Override // com.google.android.gms.internal.gtm.zzbs
    public final void zzd() {
        synchronized (zzfb.class) {
            zza = this;
        }
    }

    public final synchronized void zze(int i5, String str, Object obj, Object obj2, Object obj3) {
        char c6;
        try {
            t.g(str);
            if (zzw().zzb()) {
                zzw();
                c6 = 'C';
            } else {
                zzw();
                c6 = 'c';
            }
            char charAt = "01VDIWEA?".charAt(i5);
            String str2 = zzbt.zza;
            String zzD = zzbr.zzD(str, zzf(obj), zzf(obj2), zzf(obj3));
            StringBuilder sb2 = new StringBuilder(String.valueOf(str2).length() + 4 + String.valueOf(zzD).length());
            sb2.append("3");
            sb2.append(charAt);
            sb2.append(c6);
            sb2.append(str2);
            sb2.append(":");
            sb2.append(zzD);
            String sb3 = sb2.toString();
            if (sb3.length() > 1024) {
                sb3 = sb3.substring(0, IntBufferBatchMountItem.INSTRUCTION_UPDATE_OVERFLOW_INSET);
            }
            zzfh zzp = zzt().zzp();
            if (zzp != null) {
                zzp.zze().zzc(sb3);
            }
        } catch (Throwable th2) {
            throw th2;
        }
    }
}
