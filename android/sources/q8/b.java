package q8;

import android.webkit.MimeTypeMap;
import com.reactnativecommunity.clipboard.ClipboardModule;
import java.util.Map;
import o8.e;

/* loaded from: classes3.dex */
public abstract class b {
    public static final MimeTypeMap a = MimeTypeMap.getSingleton();

    /* renamed from: b, reason: collision with root package name */
    public static final Map f16685b;

    static {
        e.b(ClipboardModule.MIMETYPE_HEIF, "heif", ClipboardModule.MIMETYPE_HEIC, "heic");
        f16685b = e.b("heif", ClipboardModule.MIMETYPE_HEIF, "heic", ClipboardModule.MIMETYPE_HEIC);
    }
}
