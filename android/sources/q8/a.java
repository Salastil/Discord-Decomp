package q8;

import a3.e;
import java.util.Locale;
import kotlin.Pair;
import kotlin.collections.v0;
import kotlin.jvm.internal.Intrinsics;
import kotlin.text.StringsKt;

/* loaded from: classes3.dex */
public abstract class a {
    public static final Object a = v0.g(new Pair("mkv", "video/x-matroska"), new Pair("glb", "model/gltf-binary"));

    /* JADX WARN: Type inference failed for: r0v8, types: [java.lang.Object, java.util.Map] */
    public static final String a(String path) {
        String str;
        Locale locale;
        String o6;
        Intrinsics.checkNotNullParameter(path, "path");
        int L = StringsKt.L('.', 0, 6, path);
        if (L < 0 || L == path.length() - 1) {
            str = null;
        } else {
            str = path.substring(L + 1);
            Intrinsics.checkNotNullExpressionValue(str, "substring(...)");
        }
        if (str == null || (o6 = e.o((locale = Locale.US), "US", str, locale, "toLowerCase(...)")) == null) {
            return null;
        }
        String str2 = (String) b.f16685b.get(o6);
        if (str2 == null) {
            str2 = b.a.getMimeTypeFromExtension(o6);
        }
        return str2 == null ? (String) a.get(o6) : str2;
    }
}
