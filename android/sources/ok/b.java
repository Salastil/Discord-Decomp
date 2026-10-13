package ok;

import com.linecorp.apng.ApngDrawable;
import com.linecorp.apng.decoder.Apng;
import java.io.BufferedInputStream;
import java.io.File;
import java.io.FileInputStream;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class b {
    public static ApngDrawable a(File file) {
        int i5 = ApngDrawable.L;
        Intrinsics.checkNotNullParameter(file, "file");
        BufferedInputStream stream = new BufferedInputStream(new FileInputStream(file), 8192);
        try {
            Intrinsics.checkNotNullParameter(stream, "stream");
            Apng decode = Apng.INSTANCE.decode(stream);
            ApngDrawable apngDrawable = new ApngDrawable(new a(decode, decode.getWidth(), decode.getHeight(), 160, new o5.a(7)));
            stream.close();
            return apngDrawable;
        } finally {
        }
    }
}
