package sd;

import android.net.Uri;
import com.google.android.exoplayer2.upstream.DataSource;
import ie.u0;
import java.security.InvalidAlgorithmParameterException;
import java.security.InvalidKeyException;
import java.security.NoSuchAlgorithmException;
import java.util.Map;
import javax.crypto.Cipher;
import javax.crypto.CipherInputStream;
import javax.crypto.NoSuchPaddingException;
import javax.crypto.spec.IvParameterSpec;
import javax.crypto.spec.SecretKeySpec;

/* loaded from: classes3.dex */
public final class a implements DataSource {

    /* renamed from: d, reason: collision with root package name */
    public final DataSource f17858d;

    /* renamed from: e, reason: collision with root package name */
    public final byte[] f17859e;

    /* renamed from: i, reason: collision with root package name */
    public final byte[] f17860i;

    /* renamed from: v, reason: collision with root package name */
    public CipherInputStream f17861v;

    public a(DataSource dataSource, byte[] bArr, byte[] bArr2) {
        this.f17858d = dataSource;
        this.f17859e = bArr;
        this.f17860i = bArr2;
    }

    @Override // com.google.android.exoplayer2.upstream.DataSource
    public final void close() {
        if (this.f17861v != null) {
            this.f17861v = null;
            this.f17858d.close();
        }
    }

    @Override // com.google.android.exoplayer2.upstream.DataSource
    public final void n(u0 u0Var) {
        u0Var.getClass();
        this.f17858d.n(u0Var);
    }

    @Override // com.google.android.exoplayer2.upstream.DataSource
    public final long o(ie.p pVar) {
        try {
            Cipher cipher = Cipher.getInstance("AES/CBC/PKCS7Padding");
            try {
                cipher.init(2, new SecretKeySpec(this.f17859e, "AES"), new IvParameterSpec(this.f17860i));
                ie.n nVar = new ie.n(this.f17858d, pVar);
                this.f17861v = new CipherInputStream(nVar, cipher);
                nVar.c();
                return -1L;
            } catch (InvalidAlgorithmParameterException | InvalidKeyException e9) {
                throw new RuntimeException(e9);
            }
        } catch (NoSuchAlgorithmException | NoSuchPaddingException e10) {
            throw new RuntimeException(e10);
        }
    }

    @Override // ie.k
    public final int read(byte[] bArr, int i5, int i6) {
        this.f17861v.getClass();
        int read = this.f17861v.read(bArr, i5, i6);
        if (read < 0) {
            return -1;
        }
        return read;
    }

    @Override // com.google.android.exoplayer2.upstream.DataSource
    public final Map s() {
        return this.f17858d.s();
    }

    @Override // com.google.android.exoplayer2.upstream.DataSource
    public final Uri x() {
        return this.f17858d.x();
    }
}
