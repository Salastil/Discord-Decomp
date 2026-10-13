package je;

import java.nio.ByteBuffer;

/* loaded from: classes3.dex */
public interface n {
    static long a(n nVar) {
        byte[] bArr = (byte[]) ((o) nVar).f12750b.get("exo_len");
        if (bArr != null) {
            return ByteBuffer.wrap(bArr).getLong();
        }
        return -1L;
    }
}
