package com.discord.emoji;

import com.discord.jank_stats.JankRecordStore;
import kotlin.Metadata;
import kotlin.jvm.internal.Intrinsics;
import org.jetbrains.annotations.NotNull;
import s4.h;

@Metadata(d1 = {"\u0000\"\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0010\u000e\n\u0002\b\u000b\n\u0002\u0010\u000b\n\u0002\b\u0004\n\u0002\u0010\b\n\u0002\b\u0005\b\u0087@\u0018\u00002\u00020\u0001B\u000f\u0012\u0006\u0010\u0002\u001a\u00020\u0003¢\u0006\u0004\b\u0004\u0010\u0005J\r\u0010\b\u001a\u00020\u0003¢\u0006\u0004\b\t\u0010\u0005J\u000f\u0010\n\u001a\u00020\u0003H\u0002¢\u0006\u0004\b\u000b\u0010\u0005J\r\u0010\f\u001a\u00020\u0003¢\u0006\u0004\b\r\u0010\u0005J\u001a\u0010\u000e\u001a\u00020\u000f2\b\u0010\u0010\u001a\u0004\u0018\u00010\u0001HÖ\u0003¢\u0006\u0004\b\u0011\u0010\u0012J\u0010\u0010\u0013\u001a\u00020\u0014HÖ\u0001¢\u0006\u0004\b\u0015\u0010\u0016J\u0010\u0010\u0017\u001a\u00020\u0003HÖ\u0001¢\u0006\u0004\b\u0018\u0010\u0005R\u0011\u0010\u0002\u001a\u00020\u0003¢\u0006\b\n\u0000\u001a\u0004\b\u0006\u0010\u0007\u0088\u0001\u0002¨\u0006\u0019"}, d2 = {"Lcom/discord/emoji/Surrogates;", "", "value", "", "constructor-impl", "(Ljava/lang/String;)Ljava/lang/String;", "getValue", "()Ljava/lang/String;", "withoutDiversity", "withoutDiversity-impl", "toCodePoints", "toCodePoints-impl", "toAssetUrl", "toAssetUrl-impl", "equals", "", JankRecordStore.SCREEN_OTHER, "equals-impl", "(Ljava/lang/String;Ljava/lang/Object;)Z", "hashCode", "", "hashCode-impl", "(Ljava/lang/String;)I", "toString", "toString-impl", "emoji_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
/* loaded from: classes.dex */
public final class Surrogates {

    @NotNull
    private final String value;

    private /* synthetic */ Surrogates(String str) {
        this.value = str;
    }

    /* renamed from: box-impl, reason: not valid java name */
    public static final /* synthetic */ Surrogates m947boximpl(String str) {
        return new Surrogates(str);
    }

    @NotNull
    /* renamed from: constructor-impl, reason: not valid java name */
    public static String m948constructorimpl(@NotNull String value) {
        Intrinsics.checkNotNullParameter(value, "value");
        return value;
    }

    /* renamed from: equals-impl, reason: not valid java name */
    public static boolean m949equalsimpl(String str, Object obj) {
        return (obj instanceof Surrogates) && Intrinsics.areEqual(str, ((Surrogates) obj).m956unboximpl());
    }

    /* renamed from: equals-impl0, reason: not valid java name */
    public static final boolean m950equalsimpl0(String str, String str2) {
        return Intrinsics.areEqual(str, str2);
    }

    /* renamed from: hashCode-impl, reason: not valid java name */
    public static int m951hashCodeimpl(String str) {
        return str.hashCode();
    }

    @NotNull
    /* renamed from: toAssetUrl-impl, reason: not valid java name */
    public static final String m952toAssetUrlimpl(String str) {
        return h.f("asset:///emoji-", m953toCodePointsimpl(str), ".png");
    }

    /* renamed from: toCodePoints-impl, reason: not valid java name */
    private static final String m953toCodePointsimpl(String str) {
        StringBuilder sb2 = new StringBuilder();
        int i5 = 0;
        while (i5 < str.length()) {
            int codePointAt = str.codePointAt(i5);
            if (sb2.length() > 0) {
                sb2.append("-");
            }
            sb2.append(Integer.toHexString(codePointAt));
            i5 += Character.charCount(codePointAt);
        }
        return sb2.toString();
    }

    /* renamed from: toString-impl, reason: not valid java name */
    public static String m954toStringimpl(String str) {
        return h.f("Surrogates(value=", str, ")");
    }

    @NotNull
    /* renamed from: withoutDiversity-impl, reason: not valid java name */
    public static final String m955withoutDiversityimpl(String str) {
        char[] chars = Character.toChars(str.codePointAt(0));
        Intrinsics.checkNotNullExpressionValue(chars, "toChars(...)");
        Intrinsics.checkNotNullParameter(chars, "<this>");
        Intrinsics.checkNotNullParameter("", "separator");
        Intrinsics.checkNotNullParameter("", "prefix");
        Intrinsics.checkNotNullParameter("", "postfix");
        Intrinsics.checkNotNullParameter("...", "truncated");
        StringBuilder buffer = new StringBuilder();
        Intrinsics.checkNotNullParameter(chars, "<this>");
        Intrinsics.checkNotNullParameter(buffer, "buffer");
        Intrinsics.checkNotNullParameter("", "separator");
        Intrinsics.checkNotNullParameter("", "prefix");
        Intrinsics.checkNotNullParameter("", "postfix");
        Intrinsics.checkNotNullParameter("...", "truncated");
        buffer.append((CharSequence) "");
        int i5 = 0;
        for (char c6 : chars) {
            i5++;
            if (i5 > 1) {
                buffer.append((CharSequence) "");
            }
            buffer.append(c6);
        }
        buffer.append((CharSequence) "");
        return buffer.toString();
    }

    public boolean equals(Object obj) {
        return m949equalsimpl(this.value, obj);
    }

    @NotNull
    public final String getValue() {
        return this.value;
    }

    public int hashCode() {
        return m951hashCodeimpl(this.value);
    }

    public String toString() {
        return m954toStringimpl(this.value);
    }

    /* renamed from: unbox-impl, reason: not valid java name */
    public final /* synthetic */ String m956unboximpl() {
        return this.value;
    }
}
