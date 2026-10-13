package kotlin.text;

import com.discord.misc.utilities.chat_view_types.ChatViewRecyclerTypes;
import kotlin.Metadata;
import kotlin.ranges.IntRange;

/* JADX INFO: Access modifiers changed from: package-private */
@Metadata(d1 = {"\u0000\b\n\u0002\u0010\b\n\u0002\b\u0004\u001a\u0017\u0010\u0002\u001a\u00020\u00002\u0006\u0010\u0001\u001a\u00020\u0000H\u0001¢\u0006\u0004\b\u0002\u0010\u0003¨\u0006\u0004"}, d2 = {"", "radix", "checkRadix", "(I)I", "kotlin-stdlib"}, k = 5, mv = {2, 1, 0}, xi = ChatViewRecyclerTypes.MEDIA_ATTACHMENT_MOSAIC_IMAGE, xs = "kotlin/text/CharsKt")
/* loaded from: classes3.dex */
public class CharsKt__CharJVMKt {
    public static int checkRadix(int i5) {
        if (2 <= i5 && i5 < 37) {
            return i5;
        }
        StringBuilder r5 = a3.e.r(i5, "radix ", " was not in valid range ");
        r5.append(new IntRange(2, 36, 1));
        throw new IllegalArgumentException(r5.toString());
    }
}
