package bg;

import java.io.Serializable;
import java.security.MessageDigest;
import java.security.NoSuchAlgorithmException;

/* loaded from: classes3.dex */
public final class m0 extends b implements Serializable {
    public final String E;

    /* renamed from: w, reason: collision with root package name */
    public final MessageDigest f2966w;

    /* renamed from: x, reason: collision with root package name */
    public final int f2967x;

    /* renamed from: y, reason: collision with root package name */
    public final boolean f2968y;

    public m0() {
        boolean z5;
        try {
            MessageDigest messageDigest = MessageDigest.getInstance("SHA-256");
            this.f2966w = messageDigest;
            this.f2967x = messageDigest.getDigestLength();
            this.E = "Hashing.sha256()";
            try {
                messageDigest.clone();
                z5 = true;
            } catch (CloneNotSupportedException unused) {
                z5 = false;
            }
            this.f2968y = z5;
        } catch (NoSuchAlgorithmException e9) {
            throw new AssertionError(e9);
        }
    }

    public final String toString() {
        return this.E;
    }
}
