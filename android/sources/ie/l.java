package ie;

import android.net.Uri;
import android.util.Base64;
import hc.g1;
import java.net.URLDecoder;

/* loaded from: classes3.dex */
public final class l extends h {
    public int E;

    /* renamed from: w, reason: collision with root package name */
    public p f10687w;

    /* renamed from: x, reason: collision with root package name */
    public byte[] f10688x;

    /* renamed from: y, reason: collision with root package name */
    public int f10689y;

    @Override // com.google.android.exoplayer2.upstream.DataSource
    public final void close() {
        if (this.f10688x != null) {
            this.f10688x = null;
            c();
        }
        this.f10687w = null;
    }

    @Override // com.google.android.exoplayer2.upstream.DataSource
    public final long o(p pVar) {
        d();
        this.f10687w = pVar;
        Uri uri = pVar.a;
        long j = pVar.f10716g;
        Uri normalizeScheme = uri.normalizeScheme();
        String scheme = normalizeScheme.getScheme();
        ke.b.f("Unsupported scheme: " + scheme, "data".equals(scheme));
        String schemeSpecificPart = normalizeScheme.getSchemeSpecificPart();
        int i5 = ke.d0.a;
        String[] split = schemeSpecificPart.split(",", -1);
        if (split.length != 2) {
            throw new g1("Unexpected URI format: " + normalizeScheme, null, true, 0);
        }
        String str = split[1];
        if (split[0].contains(";base64")) {
            try {
                this.f10688x = Base64.decode(str, 0);
            } catch (IllegalArgumentException e9) {
                throw new g1(a3.e.k("Error while parsing Base64 encoded string: ", str), e9, true, 0);
            }
        } else {
            this.f10688x = URLDecoder.decode(str, ei.d.a.name()).getBytes(ei.d.f8100c);
        }
        long j5 = pVar.f10715f;
        byte[] bArr = this.f10688x;
        if (j5 > bArr.length) {
            this.f10688x = null;
            throw new m(2008);
        }
        int i6 = (int) j5;
        this.f10689y = i6;
        int length = bArr.length - i6;
        this.E = length;
        if (j != -1) {
            this.E = (int) Math.min(length, j);
        }
        e(pVar);
        return j != -1 ? j : this.E;
    }

    @Override // ie.k
    public final int read(byte[] bArr, int i5, int i6) {
        if (i6 == 0) {
            return 0;
        }
        int i10 = this.E;
        if (i10 == 0) {
            return -1;
        }
        int min = Math.min(i6, i10);
        byte[] bArr2 = this.f10688x;
        int i11 = ke.d0.a;
        System.arraycopy(bArr2, this.f10689y, bArr, i5, min);
        this.f10689y += min;
        this.E -= min;
        b(min);
        return min;
    }

    @Override // com.google.android.exoplayer2.upstream.DataSource
    public final Uri x() {
        p pVar = this.f10687w;
        if (pVar != null) {
            return pVar.a;
        }
        return null;
    }
}
