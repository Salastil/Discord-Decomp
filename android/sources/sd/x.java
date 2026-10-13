package sd;

import android.text.TextUtils;
import com.facebook.react.fabric.mounting.mountitems.IntBufferBatchMountItem;
import com.google.android.exoplayer2.Format;
import hc.f0;
import hc.g1;
import java.util.Arrays;
import java.util.regex.Matcher;
import java.util.regex.Pattern;
import ke.b0;

/* loaded from: classes3.dex */
public final class x implements qc.j {

    /* renamed from: g, reason: collision with root package name */
    public static final Pattern f17949g = Pattern.compile("LOCAL:([^,]+)");

    /* renamed from: h, reason: collision with root package name */
    public static final Pattern f17950h = Pattern.compile("MPEGTS:(-?\\d+)");
    public final String a;

    /* renamed from: b, reason: collision with root package name */
    public final b0 f17951b;

    /* renamed from: d, reason: collision with root package name */
    public qc.l f17953d;

    /* renamed from: f, reason: collision with root package name */
    public int f17955f;

    /* renamed from: c, reason: collision with root package name */
    public final ke.w f17952c = new ke.w();

    /* renamed from: e, reason: collision with root package name */
    public byte[] f17954e = new byte[IntBufferBatchMountItem.INSTRUCTION_UPDATE_OVERFLOW_INSET];

    public x(String str, b0 b0Var) {
        this.a = str;
        this.f17951b = b0Var;
    }

    @Override // qc.j
    public final void a(qc.l lVar) {
        this.f17953d = lVar;
        lVar.c(new qc.n(-9223372036854775807L));
    }

    public final qc.v b(long j) {
        qc.v y5 = this.f17953d.y(0, 3);
        f0 f0Var = new f0();
        f0Var.k = "text/vtt";
        f0Var.f9671c = this.a;
        f0Var.f9681o = j;
        y5.e(new Format(f0Var));
        this.f17953d.r();
        return y5;
    }

    @Override // qc.j
    public final int e(qc.k kVar, qc.m mVar) {
        String h6;
        this.f17953d.getClass();
        int i5 = (int) ((qc.g) kVar).f16772i;
        int i6 = this.f17955f;
        byte[] bArr = this.f17954e;
        int i10 = -1;
        if (i6 == bArr.length) {
            this.f17954e = Arrays.copyOf(bArr, ((i5 != -1 ? i5 : bArr.length) * 3) / 2);
        }
        byte[] bArr2 = this.f17954e;
        int i11 = this.f17955f;
        int read = ((qc.g) kVar).read(bArr2, i11, bArr2.length - i11);
        if (read != -1) {
            int i12 = this.f17955f + read;
            this.f17955f = i12;
            if (i5 == -1 || i12 != i5) {
                return 0;
            }
        }
        ke.w wVar = new ke.w(this.f17954e);
        fe.l.d(wVar);
        String h7 = wVar.h(ei.d.f8100c);
        long j = 0;
        long j5 = 0;
        while (true) {
            int i13 = i10;
            Matcher matcher = null;
            if (TextUtils.isEmpty(h7)) {
                while (true) {
                    String h10 = wVar.h(ei.d.f8100c);
                    if (h10 == null) {
                        break;
                    }
                    if (fe.l.a.matcher(h10).matches()) {
                        do {
                            h6 = wVar.h(ei.d.f8100c);
                            if (h6 != null) {
                            }
                        } while (!h6.isEmpty());
                    } else {
                        Matcher matcher2 = fe.j.a.matcher(h10);
                        if (matcher2.matches()) {
                            matcher = matcher2;
                            break;
                        }
                    }
                }
                if (matcher == null) {
                    b(0L);
                    return i13;
                }
                String group = matcher.group(1);
                group.getClass();
                long c6 = fe.l.c(group);
                long b10 = this.f17951b.b(((((j + c6) - j5) * 90000) / 1000000) % 8589934592L);
                qc.v b11 = b(b10 - c6);
                byte[] bArr3 = this.f17954e;
                int i14 = this.f17955f;
                ke.w wVar2 = this.f17952c;
                wVar2.D(bArr3, i14);
                b11.d(this.f17955f, wVar2);
                b11.b(b10, 1, this.f17955f, 0, null);
                return i13;
            }
            if (h7.startsWith("X-TIMESTAMP-MAP")) {
                Matcher matcher3 = f17949g.matcher(h7);
                if (!matcher3.find()) {
                    throw g1.a("X-TIMESTAMP-MAP doesn't contain local timestamp: ".concat(h7), null);
                }
                Matcher matcher4 = f17950h.matcher(h7);
                if (!matcher4.find()) {
                    throw g1.a("X-TIMESTAMP-MAP doesn't contain media timestamp: ".concat(h7), null);
                }
                String group2 = matcher3.group(1);
                group2.getClass();
                j5 = fe.l.c(group2);
                String group3 = matcher4.group(1);
                group3.getClass();
                j = (Long.parseLong(group3) * 1000000) / 90000;
            }
            h7 = wVar.h(ei.d.f8100c);
            i10 = i13;
        }
    }

    @Override // qc.j
    public final boolean f(qc.k kVar) {
        qc.g gVar = (qc.g) kVar;
        gVar.j(this.f17954e, 0, 6, false);
        byte[] bArr = this.f17954e;
        ke.w wVar = this.f17952c;
        wVar.D(bArr, 6);
        if (fe.l.a(wVar)) {
            return true;
        }
        gVar.j(this.f17954e, 6, 3, false);
        wVar.D(this.f17954e, 9);
        return fe.l.a(wVar);
    }

    @Override // qc.j
    public final void g(long j, long j5) {
        throw new IllegalStateException();
    }

    @Override // qc.j
    public final void release() {
    }
}
