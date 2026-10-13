package th;

import android.os.ParcelFileDescriptor;
import java.util.concurrent.ExecutionException;

/* loaded from: classes3.dex */
public final class a0 {
    public final uh.f a;

    public a0(uh.f fVar) {
        this.a = fVar;
    }

    public final ParcelFileDescriptor.AutoCloseInputStream a(int i5, int i6, String str, String str2) {
        try {
            ParcelFileDescriptor parcelFileDescriptor = (ParcelFileDescriptor) a5.k0.h(((u1) this.a.a()).f(i5, i6, str, str2));
            if (parcelFileDescriptor != null && parcelFileDescriptor.getFileDescriptor() != null) {
                return new ParcelFileDescriptor.AutoCloseInputStream(parcelFileDescriptor);
            }
            throw new l0("Corrupted ParcelFileDescriptor, session " + i5 + " packName " + str + " sliceId " + str2 + ", chunkNumber " + i6, i5);
        } catch (InterruptedException e9) {
            throw new l0("Extractor was interrupted while waiting for chunk file.", e9, i5);
        } catch (ExecutionException e10) {
            StringBuilder n6 = com.discord.chat.bridge.botuikit.a.n("Error opening chunk file, session ", " packName ", str, i5, " sliceId ");
            n6.append(str2);
            n6.append(", chunkNumber ");
            n6.append(i6);
            throw new l0(n6.toString(), e10, i5);
        }
    }
}
