package jc;

import android.content.Context;
import android.content.Intent;
import android.content.IntentFilter;
import android.provider.Settings;
import android.util.Pair;
import com.google.android.exoplayer2.Format;
import fi.w0;
import java.util.Arrays;
import java.util.Collections;
import java.util.List;

/* loaded from: classes3.dex */
public final class f {

    /* renamed from: c, reason: collision with root package name */
    public static final f f12513c = new f(10, new int[]{2});

    /* renamed from: d, reason: collision with root package name */
    public static final fi.r0 f12514d;

    /* renamed from: e, reason: collision with root package name */
    public static final w0 f12515e;
    public final int[] a;

    /* renamed from: b, reason: collision with root package name */
    public final int f12516b;

    static {
        Object[] objArr = {2, 5, 6};
        fi.p.b(3, objArr);
        f12514d = fi.e0.j(3, objArr);
        a1.d dVar = new a1.d(4, 9);
        dVar.w(5, 6);
        dVar.w(17, 6);
        dVar.w(7, 6);
        dVar.w(30, 10);
        dVar.w(18, 6);
        dVar.w(6, 8);
        dVar.w(8, 8);
        dVar.w(14, 8);
        f12515e = dVar.b();
    }

    public f(int i5, int[] iArr) {
        if (iArr != null) {
            int[] copyOf = Arrays.copyOf(iArr, iArr.length);
            this.a = copyOf;
            Arrays.sort(copyOf);
        } else {
            this.a = new int[0];
        }
        this.f12516b = i5;
    }

    public static f a(Context context) {
        return b(context, context.registerReceiver(null, new IntentFilter("android.media.action.HDMI_AUDIO_PLUG")));
    }

    public static f b(Context context, Intent intent) {
        int i5 = ke.d0.a;
        if (i5 < 23 || !d.b(context)) {
            fi.g0 g0Var = new fi.g0();
            if (i5 >= 17) {
                String str = ke.d0.f13295c;
                if (("Amazon".equals(str) || "Xiaomi".equals(str)) && Settings.Global.getInt(context.getContentResolver(), "external_surround_sound_enabled", 0) == 1) {
                    fi.r0 r0Var = f12514d;
                    r0Var.getClass();
                    g0Var.c(r0Var);
                }
            }
            if (i5 >= 29 && (ke.d0.H(context) || (i5 >= 23 && context.getPackageManager().hasSystemFeature("android.hardware.type.automotive")))) {
                fi.e0 a = e.a();
                a.getClass();
                g0Var.c(a);
                return new f(10, ki.b.S(g0Var.f()));
            }
            if (intent != null && intent.getIntExtra("android.media.extra.AUDIO_PLUG_STATE", 0) == 1) {
                int[] intArrayExtra = intent.getIntArrayExtra("android.media.extra.ENCODINGS");
                if (intArrayExtra != null) {
                    List aVar = intArrayExtra.length == 0 ? Collections.EMPTY_LIST : new hi.a(0, intArrayExtra.length, intArrayExtra);
                    aVar.getClass();
                    g0Var.c(aVar);
                }
                return new f(intent.getIntExtra("android.media.extra.MAX_CHANNEL_COUNT", 10), ki.b.S(g0Var.f()));
            }
            fi.h0 f2 = g0Var.f();
            if (!f2.isEmpty()) {
                return new f(10, ki.b.S(f2));
            }
        }
        return f12513c;
    }

    /* JADX WARN: Code restructure failed: missing block: B:38:0x00a0, code lost:
    
        if (r1 != 5) goto L57;
     */
    /* JADX WARN: Removed duplicated region for block: B:30:0x00bd  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final Pair c(Format format) {
        int intValue;
        int o6;
        String str = format.I;
        str.getClass();
        int c6 = ke.o.c(str, format.F);
        Integer valueOf = Integer.valueOf(c6);
        w0 w0Var = f12515e;
        if (w0Var.containsKey(valueOf)) {
            int[] iArr = this.a;
            int i5 = 6;
            if (c6 == 18 && Arrays.binarySearch(iArr, 18) < 0) {
                c6 = 6;
            } else if ((c6 == 8 && Arrays.binarySearch(iArr, 8) < 0) || (c6 == 30 && Arrays.binarySearch(iArr, 30) < 0)) {
                c6 = 7;
            }
            if (Arrays.binarySearch(iArr, c6) < 0) {
                return null;
            }
            int i6 = format.V;
            if (i6 == -1 || c6 == 18) {
                int i10 = format.W;
                if (i10 == -1) {
                    i10 = 48000;
                }
                if (ke.d0.a >= 29) {
                    intValue = e.b(c6, i10);
                } else {
                    Object obj = w0Var.get(Integer.valueOf(c6));
                    intValue = ((Integer) (obj != null ? obj : 0)).intValue();
                }
                i6 = intValue;
            } else if (!format.I.equals("audio/vnd.dts.uhd;profile=p2")) {
            }
            int i11 = ke.d0.a;
            if (i11 <= 28) {
                if (i6 == 7) {
                    i5 = 8;
                } else if (i6 != 3) {
                    if (i6 != 4) {
                    }
                }
                if (i11 <= 26 && "fugu".equals(ke.d0.f13294b) && i5 == 1) {
                    i5 = 2;
                }
                o6 = ke.d0.o(i5);
                if (o6 != 0) {
                    return Pair.create(Integer.valueOf(c6), Integer.valueOf(o6));
                }
            }
            i5 = i6;
            if (i11 <= 26) {
                i5 = 2;
            }
            o6 = ke.d0.o(i5);
            if (o6 != 0) {
            }
        }
        return null;
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (!(obj instanceof f)) {
            return false;
        }
        f fVar = (f) obj;
        return Arrays.equals(this.a, fVar.a) && this.f12516b == fVar.f12516b;
    }

    public final int hashCode() {
        return (Arrays.hashCode(this.a) * 31) + this.f12516b;
    }

    public final String toString() {
        return "AudioCapabilities[maxChannelCount=" + this.f12516b + ", supportedEncodings=" + Arrays.toString(this.a) + "]";
    }
}
