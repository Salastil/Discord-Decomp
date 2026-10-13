package kotlin.text;

import com.discord.misc.utilities.chat_view_types.ChatViewRecyclerTypes;
import kotlin.Metadata;

@Metadata(d1 = {"kotlin/text/CharsKt__CharJVMKt", "kotlin/text/a"}, d2 = {}, k = 4, mv = {2, 1, 0}, xi = ChatViewRecyclerTypes.MEDIA_ATTACHMENT_MOSAIC_IMAGE)
/* loaded from: classes3.dex */
public final class CharsKt extends a {
    private CharsKt() {
    }

    public static boolean b(char c6) {
        return Character.isWhitespace(c6) || Character.isSpaceChar(c6);
    }
}
