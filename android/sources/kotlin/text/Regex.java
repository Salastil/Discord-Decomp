package kotlin.text;

import java.io.Serializable;
import java.util.ArrayList;
import java.util.List;
import java.util.regex.Matcher;
import java.util.regex.Pattern;
import kotlin.Metadata;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.SourceDebugExtension;
import org.jetbrains.annotations.NotNull;

@Metadata(d1 = {"\u0000\u001c\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0010\u000e\n\u0002\b\u0003\n\u0002\u0010\r\n\u0002\b\u0007\u0018\u0000 \f2\u00060\u0001j\u0002`\u0002:\u0001\rB\u0011\b\u0016\u0012\u0006\u0010\u0004\u001a\u00020\u0003¢\u0006\u0004\b\u0005\u0010\u0006J\u001d\u0010\n\u001a\u00020\u00032\u0006\u0010\b\u001a\u00020\u00072\u0006\u0010\t\u001a\u00020\u0003¢\u0006\u0004\b\n\u0010\u000b¨\u0006\u000e"}, d2 = {"Lkotlin/text/Regex;", "Ljava/io/Serializable;", "Lkotlin/io/Serializable;", "", "pattern", "<init>", "(Ljava/lang/String;)V", "", "input", "replacement", "replace", "(Ljava/lang/CharSequence;Ljava/lang/String;)Ljava/lang/String;", "e", "kotlin/text/n", "kotlin-stdlib"}, k = 1, mv = {2, 1, 0}, xi = 48)
@SourceDebugExtension({"SMAP\nRegex.kt\nKotlin\n*S Kotlin\n*F\n+ 1 Regex.kt\nkotlin/text/Regex\n+ 2 Regex.kt\nkotlin/text/RegexKt\n+ 3 fake.kt\nkotlin/jvm/internal/FakeKt\n*L\n1#1,401:1\n22#2,3:402\n1#3:405\n*S KotlinDebug\n*F\n+ 1 Regex.kt\nkotlin/text/Regex\n*L\n103#1:402,3\n*E\n"})
/* loaded from: classes3.dex */
public final class Regex implements Serializable {

    /* renamed from: e, reason: collision with root package name */
    @NotNull
    public static final n f13559e = new n(null);

    /* renamed from: d, reason: collision with root package name */
    public final Pattern f13560d;

    public Regex(Pattern nativePattern) {
        Intrinsics.checkNotNullParameter(nativePattern, "nativePattern");
        this.f13560d = nativePattern;
    }

    public final boolean a(String input) {
        Intrinsics.checkNotNullParameter(input, "input");
        return this.f13560d.matcher(input).find();
    }

    public final m b(CharSequence input) {
        Intrinsics.checkNotNullParameter(input, "input");
        Matcher matcher = this.f13560d.matcher(input);
        Intrinsics.checkNotNullExpressionValue(matcher, "matcher(...)");
        if (matcher.find(0)) {
            return new m(matcher, input);
        }
        return null;
    }

    public final m c(CharSequence input) {
        Intrinsics.checkNotNullParameter(input, "input");
        Matcher matcher = this.f13560d.matcher(input);
        Intrinsics.checkNotNullExpressionValue(matcher, "matcher(...)");
        if (matcher.matches()) {
            return new m(matcher, input);
        }
        return null;
    }

    public final boolean d(String input) {
        Intrinsics.checkNotNullParameter(input, "input");
        return this.f13560d.matcher(input).matches();
    }

    public final String e(CharSequence input, Function1 transform) {
        Intrinsics.checkNotNullParameter(input, "input");
        Intrinsics.checkNotNullParameter(transform, "transform");
        m b10 = b(input);
        if (b10 == null) {
            return input.toString();
        }
        int length = input.length();
        StringBuilder sb2 = new StringBuilder(length);
        int i5 = 0;
        do {
            sb2.append(input, i5, b10.c().f13545d);
            sb2.append((CharSequence) transform.invoke(b10));
            i5 = b10.c().f13546e + 1;
            b10 = b10.next();
            if (i5 >= length) {
                break;
            }
        } while (b10 != null);
        if (i5 < length) {
            sb2.append(input, i5, length);
        }
        String sb3 = sb2.toString();
        Intrinsics.checkNotNullExpressionValue(sb3, "toString(...)");
        return sb3;
    }

    public final List f(String input) {
        Intrinsics.checkNotNullParameter(input, "input");
        int i5 = 0;
        StringsKt__StringsKt.u(0);
        Matcher matcher = this.f13560d.matcher(input);
        if (!matcher.find()) {
            return kotlin.collections.b0.c(input.toString());
        }
        ArrayList arrayList = new ArrayList(10);
        do {
            arrayList.add(input.subSequence(i5, matcher.start()).toString());
            i5 = matcher.end();
        } while (matcher.find());
        arrayList.add(input.subSequence(i5, input.length()).toString());
        return arrayList;
    }

    @NotNull
    public final String replace(@NotNull CharSequence input, @NotNull String replacement) {
        Intrinsics.checkNotNullParameter(input, "input");
        Intrinsics.checkNotNullParameter(replacement, "replacement");
        String replaceAll = this.f13560d.matcher(input).replaceAll(replacement);
        Intrinsics.checkNotNullExpressionValue(replaceAll, "replaceAll(...)");
        return replaceAll;
    }

    public final String toString() {
        String pattern = this.f13560d.toString();
        Intrinsics.checkNotNullExpressionValue(pattern, "toString(...)");
        return pattern;
    }

    /* JADX WARN: Illegal instructions before constructor call */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public Regex(@NotNull String pattern) {
        this(r2);
        Intrinsics.checkNotNullParameter(pattern, "pattern");
        Pattern compile = Pattern.compile(pattern);
        Intrinsics.checkNotNullExpressionValue(compile, "compile(...)");
    }

    /* JADX WARN: Illegal instructions before constructor call */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public Regex(String pattern, p option) {
        this(r2);
        Intrinsics.checkNotNullParameter(pattern, "pattern");
        Intrinsics.checkNotNullParameter(option, "option");
        n nVar = f13559e;
        int i5 = option.f13591d;
        nVar.getClass();
        Pattern compile = Pattern.compile(pattern, (i5 & 2) != 0 ? i5 | 64 : i5);
        Intrinsics.checkNotNullExpressionValue(compile, "compile(...)");
    }
}
