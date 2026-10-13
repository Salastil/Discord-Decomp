package com.discord.chat.bridge.spoiler;

import com.discord.chat.bridge.contentnode.SpoilerContentNode;
import com.discord.jank_stats.JankRecordStore;
import com.facebook.react.devsupport.StackTraceHelper;
import kotlin.Metadata;
import kotlin.jvm.internal.DefaultConstructorMarker;
import kotlin.jvm.internal.Intrinsics;
import org.jetbrains.annotations.NotNull;
import s4.h;

@Metadata(d1 = {"\u0000\"\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0010\u000e\n\u0002\b\u0005\n\u0002\u0010\u000b\n\u0002\b\u0004\n\u0002\u0010\b\n\u0002\b\u0006\b\u0087@\u0018\u0000 \u00132\u00020\u0001:\u0001\u0013B\u000f\u0012\u0006\u0010\u0002\u001a\u00020\u0003¢\u0006\u0004\b\u0004\u0010\u0005J\u001a\u0010\b\u001a\u00020\t2\b\u0010\n\u001a\u0004\u0018\u00010\u0001HÖ\u0003¢\u0006\u0004\b\u000b\u0010\fJ\u0010\u0010\r\u001a\u00020\u000eHÖ\u0001¢\u0006\u0004\b\u000f\u0010\u0010J\u0010\u0010\u0011\u001a\u00020\u0003HÖ\u0001¢\u0006\u0004\b\u0012\u0010\u0005R\u0011\u0010\u0002\u001a\u00020\u0003¢\u0006\b\n\u0000\u001a\u0004\b\u0006\u0010\u0007\u0088\u0001\u0002¨\u0006\u0014"}, d2 = {"Lcom/discord/chat/bridge/spoiler/SpoilerIdentifier;", "", StackTraceHelper.ID_KEY, "", "constructor-impl", "(Ljava/lang/String;)Ljava/lang/String;", "getId", "()Ljava/lang/String;", "equals", "", JankRecordStore.SCREEN_OTHER, "equals-impl", "(Ljava/lang/String;Ljava/lang/Object;)Z", "hashCode", "", "hashCode-impl", "(Ljava/lang/String;)I", "toString", "toString-impl", "Companion", "chat_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
/* loaded from: classes.dex */
public final class SpoilerIdentifier {

    /* renamed from: Companion, reason: from kotlin metadata */
    @NotNull
    public static final Companion INSTANCE = new Companion(null);

    @NotNull
    private final String id;

    @Metadata(d1 = {"\u0000&\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u000e\n\u0000\n\u0002\u0010\b\n\u0002\b\u0003\b\u0086\u0003\u0018\u00002\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0002\u0010\u0003J%\u0010\u0004\u001a\u00020\u00052\u0006\u0010\u0006\u001a\u00020\u00072\u0006\u0010\b\u001a\u00020\t2\u0006\u0010\n\u001a\u00020\u000b¢\u0006\u0004\b\f\u0010\r¨\u0006\u000e"}, d2 = {"Lcom/discord/chat/bridge/spoiler/SpoilerIdentifier$Companion;", "", "<init>", "()V", "forNode", "Lcom/discord/chat/bridge/spoiler/SpoilerIdentifier;", "node", "Lcom/discord/chat/bridge/contentnode/SpoilerContentNode;", "containerId", "", "index", "", "forNode-2sfwrmE", "(Lcom/discord/chat/bridge/contentnode/SpoilerContentNode;Ljava/lang/String;I)Ljava/lang/String;", "chat_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
    public static final class Companion {
        public /* synthetic */ Companion(DefaultConstructorMarker defaultConstructorMarker) {
            this();
        }

        @NotNull
        /* renamed from: forNode-2sfwrmE, reason: not valid java name */
        public final String m461forNode2sfwrmE(@NotNull SpoilerContentNode node, @NotNull String containerId, int index) {
            Intrinsics.checkNotNullParameter(node, "node");
            Intrinsics.checkNotNullParameter(containerId, "containerId");
            StringBuilder n6 = com.discord.chat.bridge.botuikit.a.n("spoiler:", ":", containerId, node.hashCode(), ":");
            n6.append(index);
            return SpoilerIdentifier.m455constructorimpl(n6.toString());
        }

        private Companion() {
        }
    }

    private /* synthetic */ SpoilerIdentifier(String str) {
        this.id = str;
    }

    /* renamed from: box-impl, reason: not valid java name */
    public static final /* synthetic */ SpoilerIdentifier m454boximpl(String str) {
        return new SpoilerIdentifier(str);
    }

    @NotNull
    /* renamed from: constructor-impl, reason: not valid java name */
    public static String m455constructorimpl(@NotNull String id2) {
        Intrinsics.checkNotNullParameter(id2, "id");
        return id2;
    }

    /* renamed from: equals-impl, reason: not valid java name */
    public static boolean m456equalsimpl(String str, Object obj) {
        return (obj instanceof SpoilerIdentifier) && Intrinsics.areEqual(str, ((SpoilerIdentifier) obj).m460unboximpl());
    }

    /* renamed from: equals-impl0, reason: not valid java name */
    public static final boolean m457equalsimpl0(String str, String str2) {
        return Intrinsics.areEqual(str, str2);
    }

    /* renamed from: hashCode-impl, reason: not valid java name */
    public static int m458hashCodeimpl(String str) {
        return str.hashCode();
    }

    /* renamed from: toString-impl, reason: not valid java name */
    public static String m459toStringimpl(String str) {
        return h.f("SpoilerIdentifier(id=", str, ")");
    }

    public boolean equals(Object obj) {
        return m456equalsimpl(this.id, obj);
    }

    @NotNull
    public final String getId() {
        return this.id;
    }

    public int hashCode() {
        return m458hashCodeimpl(this.id);
    }

    public String toString() {
        return m459toStringimpl(this.id);
    }

    /* renamed from: unbox-impl, reason: not valid java name */
    public final /* synthetic */ String m460unboximpl() {
        return this.id;
    }
}
