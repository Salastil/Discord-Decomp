package kotlin.text;

import java.nio.charset.Charset;
import kotlin.Metadata;
import kotlin.jvm.internal.Intrinsics;
import org.jetbrains.annotations.NotNull;

@Metadata(d1 = {"\u0000\u0010\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\u0018\u0002\n\u0002\b\u0003\bÆ\u0002\u0018\u00002\u00020\u0001R\u0014\u0010\u0003\u001a\u00020\u00028\u0006X\u0087\u0004¢\u0006\u0006\n\u0004\b\u0003\u0010\u0004¨\u0006\u0005"}, d2 = {"Lkotlin/text/Charsets;", "", "Ljava/nio/charset/Charset;", "UTF_8", "Ljava/nio/charset/Charset;", "kotlin-stdlib"}, k = 1, mv = {2, 1, 0}, xi = 48)
/* loaded from: classes3.dex */
public final class Charsets {

    @NotNull
    public static final Charset UTF_8;

    @NotNull
    public static final Charsets a = new Charsets();

    /* renamed from: b, reason: collision with root package name */
    public static volatile Charset f13556b;

    /* renamed from: c, reason: collision with root package name */
    public static volatile Charset f13557c;

    static {
        Charset forName = Charset.forName("UTF-8");
        Intrinsics.checkNotNullExpressionValue(forName, "forName(...)");
        UTF_8 = forName;
        Intrinsics.checkNotNullExpressionValue(Charset.forName("UTF-16"), "forName(...)");
        Intrinsics.checkNotNullExpressionValue(Charset.forName("UTF-16BE"), "forName(...)");
        Intrinsics.checkNotNullExpressionValue(Charset.forName("UTF-16LE"), "forName(...)");
        Intrinsics.checkNotNullExpressionValue(Charset.forName("US-ASCII"), "forName(...)");
        Intrinsics.checkNotNullExpressionValue(Charset.forName("ISO-8859-1"), "forName(...)");
    }
}
