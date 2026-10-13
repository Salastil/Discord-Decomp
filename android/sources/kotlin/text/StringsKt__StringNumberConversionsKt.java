package kotlin.text;

import com.discord.misc.utilities.chat_view_types.ChatViewRecyclerTypes;
import kotlin.Metadata;
import kotlin.jvm.internal.Intrinsics;
import org.jetbrains.annotations.NotNull;

/* JADX INFO: Access modifiers changed from: package-private */
@Metadata(d1 = {"\u0000\f\n\u0002\u0010\u000e\n\u0002\u0010\b\n\u0002\b\u0003\u001a\u0015\u0010\u0002\u001a\u0004\u0018\u00010\u0001*\u00020\u0000H\u0007¢\u0006\u0004\b\u0002\u0010\u0003¨\u0006\u0004"}, d2 = {"", "", "toIntOrNull", "(Ljava/lang/String;)Ljava/lang/Integer;", "kotlin-stdlib"}, k = 5, mv = {2, 1, 0}, xi = ChatViewRecyclerTypes.MEDIA_ATTACHMENT_MOSAIC_IMAGE, xs = "kotlin/text/StringsKt")
/* loaded from: classes3.dex */
public class StringsKt__StringNumberConversionsKt extends w {
    public static final void e(String input) {
        Intrinsics.checkNotNullParameter(input, "input");
        throw new NumberFormatException(k0.d.h('\'', "Invalid number format: '", input));
    }

    public static Integer toIntOrNull(@NotNull String str) {
        boolean z5;
        int i5;
        int i6;
        Intrinsics.checkNotNullParameter(str, "<this>");
        Intrinsics.checkNotNullParameter(str, "<this>");
        CharsKt__CharJVMKt.checkRadix(10);
        int length = str.length();
        if (length == 0) {
            return null;
        }
        int i10 = 0;
        char charAt = str.charAt(0);
        int i11 = -2147483647;
        if (Intrinsics.compare((int) charAt, 48) < 0) {
            i5 = 1;
            if (length == 1) {
                return null;
            }
            if (charAt == '+') {
                z5 = false;
            } else {
                if (charAt != '-') {
                    return null;
                }
                i11 = Integer.MIN_VALUE;
                z5 = true;
            }
        } else {
            z5 = false;
            i5 = 0;
        }
        int i12 = -59652323;
        while (i5 < length) {
            int digit = Character.digit((int) str.charAt(i5), 10);
            if (digit < 0) {
                return null;
            }
            if ((i10 < i12 && (i12 != -59652323 || i10 < (i12 = i11 / 10))) || (i6 = i10 * 10) < i11 + digit) {
                return null;
            }
            i10 = i6 - digit;
            i5++;
        }
        return z5 ? Integer.valueOf(i10) : Integer.valueOf(-i10);
    }
}
