package cd;

import android.media.MediaCodec;
import ke.d0;

/* loaded from: classes3.dex */
public class m extends com.margelo.nitro.rive.k {

    /* renamed from: d, reason: collision with root package name */
    public final String f3440d;

    /* JADX WARN: Illegal instructions before constructor call */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public m(IllegalStateException illegalStateException, o oVar) {
        super(r0.toString(), illegalStateException);
        StringBuilder sb2 = new StringBuilder("Decoder failed: ");
        String str = null;
        sb2.append(oVar == null ? null : oVar.a);
        if (d0.a >= 21 && (illegalStateException instanceof MediaCodec.CodecException)) {
            str = ((MediaCodec.CodecException) illegalStateException).getDiagnosticInfo();
        }
        this.f3440d = str;
    }
}
