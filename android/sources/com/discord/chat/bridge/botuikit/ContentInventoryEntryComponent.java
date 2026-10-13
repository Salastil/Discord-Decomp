package com.discord.chat.bridge.botuikit;

import bs.h1;
import com.discord.jank_stats.JankRecordStore;
import com.facebook.react.devsupport.StackTraceHelper;
import kotlin.Metadata;
import kotlin.jvm.internal.DefaultConstructorMarker;
import kotlin.jvm.internal.Intrinsics;
import kotlinx.serialization.KSerializer;
import kotlinx.serialization.descriptors.SerialDescriptor;
import kotlinx.serialization.encoding.CompositeEncoder;
import kotlinx.serialization.internal.SerializationConstructorMarker;
import org.jetbrains.annotations.NotNull;
import xr.e;

@e
@Metadata(d1 = {"\u0000J\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\b\n\u0000\n\u0002\u0010\u000e\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0004\n\u0002\u0018\u0002\n\u0002\b\f\n\u0002\u0010\u000b\n\u0000\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0010\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0004\b\u0087\b\u0018\u0000 '2\u00020\u0001:\u0002&'B#\u0012\u0006\u0010\u0002\u001a\u00020\u0003\u0012\u0006\u0010\u0004\u001a\u00020\u0005\u0012\n\b\u0002\u0010\u0006\u001a\u0004\u0018\u00010\u0007¢\u0006\u0004\b\b\u0010\tB7\b\u0010\u0012\u0006\u0010\n\u001a\u00020\u0003\u0012\u0006\u0010\u0002\u001a\u00020\u0003\u0012\b\u0010\u0004\u001a\u0004\u0018\u00010\u0005\u0012\b\u0010\u0006\u001a\u0004\u0018\u00010\u0007\u0012\b\u0010\u000b\u001a\u0004\u0018\u00010\f¢\u0006\u0004\b\b\u0010\rJ\t\u0010\u0014\u001a\u00020\u0003HÆ\u0003J\t\u0010\u0015\u001a\u00020\u0005HÆ\u0003J\u000b\u0010\u0016\u001a\u0004\u0018\u00010\u0007HÆ\u0003J)\u0010\u0017\u001a\u00020\u00002\b\b\u0002\u0010\u0002\u001a\u00020\u00032\b\b\u0002\u0010\u0004\u001a\u00020\u00052\n\b\u0002\u0010\u0006\u001a\u0004\u0018\u00010\u0007HÆ\u0001J\u0013\u0010\u0018\u001a\u00020\u00192\b\u0010\u001a\u001a\u0004\u0018\u00010\u001bHÖ\u0003J\t\u0010\u001c\u001a\u00020\u0003HÖ\u0001J\t\u0010\u001d\u001a\u00020\u0005HÖ\u0001J%\u0010\u001e\u001a\u00020\u001f2\u0006\u0010 \u001a\u00020\u00002\u0006\u0010!\u001a\u00020\"2\u0006\u0010#\u001a\u00020$H\u0001¢\u0006\u0002\b%R\u0014\u0010\u0002\u001a\u00020\u0003X\u0096\u0004¢\u0006\b\n\u0000\u001a\u0004\b\u000e\u0010\u000fR\u0014\u0010\u0004\u001a\u00020\u0005X\u0096\u0004¢\u0006\b\n\u0000\u001a\u0004\b\u0010\u0010\u0011R\u0013\u0010\u0006\u001a\u0004\u0018\u00010\u0007¢\u0006\b\n\u0000\u001a\u0004\b\u0012\u0010\u0013¨\u0006("}, d2 = {"Lcom/discord/chat/bridge/botuikit/ContentInventoryEntryComponent;", "Lcom/discord/chat/bridge/botuikit/Component;", "type", "", StackTraceHelper.ID_KEY, "", "contentInventoryEntry", "Lcom/discord/chat/bridge/botuikit/ContentInventoryEntry;", "<init>", "(ILjava/lang/String;Lcom/discord/chat/bridge/botuikit/ContentInventoryEntry;)V", "seen0", "serializationConstructorMarker", "Lkotlinx/serialization/internal/SerializationConstructorMarker;", "(IILjava/lang/String;Lcom/discord/chat/bridge/botuikit/ContentInventoryEntry;Lkotlinx/serialization/internal/SerializationConstructorMarker;)V", "getType", "()I", "getId", "()Ljava/lang/String;", "getContentInventoryEntry", "()Lcom/discord/chat/bridge/botuikit/ContentInventoryEntry;", "component1", "component2", "component3", "copy", "equals", "", JankRecordStore.SCREEN_OTHER, "", "hashCode", "toString", "write$Self", "", "self", "output", "Lkotlinx/serialization/encoding/CompositeEncoder;", "serialDesc", "Lkotlinx/serialization/descriptors/SerialDescriptor;", "write$Self$chat_release", "$serializer", "Companion", "chat_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
/* loaded from: classes.dex */
public final /* data */ class ContentInventoryEntryComponent extends Component {

    /* renamed from: Companion, reason: from kotlin metadata */
    @NotNull
    public static final Companion INSTANCE = new Companion(null);
    private final ContentInventoryEntry contentInventoryEntry;

    @NotNull
    private final String id;
    private final int type;

    @Metadata(d1 = {"\u0000\u0016\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\b\u0086\u0003\u0018\u00002\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0002\u0010\u0003J\f\u0010\u0004\u001a\b\u0012\u0004\u0012\u00020\u00060\u0005¨\u0006\u0007"}, d2 = {"Lcom/discord/chat/bridge/botuikit/ContentInventoryEntryComponent$Companion;", "", "<init>", "()V", "serializer", "Lkotlinx/serialization/KSerializer;", "Lcom/discord/chat/bridge/botuikit/ContentInventoryEntryComponent;", "chat_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
    public static final class Companion {
        private Companion() {
        }

        @NotNull
        public final KSerializer serializer() {
            return ContentInventoryEntryComponent$$serializer.INSTANCE;
        }

        public /* synthetic */ Companion(DefaultConstructorMarker defaultConstructorMarker) {
            this();
        }
    }

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public /* synthetic */ ContentInventoryEntryComponent(int i5, int i6, String str, ContentInventoryEntry contentInventoryEntry, SerializationConstructorMarker serializationConstructorMarker) {
        super(null);
        if (3 != (i5 & 3)) {
            h1.l(i5, 3, ContentInventoryEntryComponent$$serializer.INSTANCE.getDescriptor());
            throw null;
        }
        this.type = i6;
        this.id = str;
        if ((i5 & 4) == 0) {
            this.contentInventoryEntry = null;
        } else {
            this.contentInventoryEntry = contentInventoryEntry;
        }
    }

    public static /* synthetic */ ContentInventoryEntryComponent copy$default(ContentInventoryEntryComponent contentInventoryEntryComponent, int i5, String str, ContentInventoryEntry contentInventoryEntry, int i6, Object obj) {
        if ((i6 & 1) != 0) {
            i5 = contentInventoryEntryComponent.type;
        }
        if ((i6 & 2) != 0) {
            str = contentInventoryEntryComponent.id;
        }
        if ((i6 & 4) != 0) {
            contentInventoryEntry = contentInventoryEntryComponent.contentInventoryEntry;
        }
        return contentInventoryEntryComponent.copy(i5, str, contentInventoryEntry);
    }

    public static final /* synthetic */ void write$Self$chat_release(ContentInventoryEntryComponent self, CompositeEncoder output, SerialDescriptor serialDesc) {
        output.n(0, self.getType(), serialDesc);
        output.y(serialDesc, 1, self.getId());
        if (!output.I(serialDesc, 2) && self.contentInventoryEntry == null) {
            return;
        }
        output.z(serialDesc, 2, ContentInventoryEntry$$serializer.INSTANCE, self.contentInventoryEntry);
    }

    /* renamed from: component1, reason: from getter */
    public final int getType() {
        return this.type;
    }

    @NotNull
    /* renamed from: component2, reason: from getter */
    public final String getId() {
        return this.id;
    }

    /* renamed from: component3, reason: from getter */
    public final ContentInventoryEntry getContentInventoryEntry() {
        return this.contentInventoryEntry;
    }

    @NotNull
    public final ContentInventoryEntryComponent copy(int type, @NotNull String id2, ContentInventoryEntry contentInventoryEntry) {
        Intrinsics.checkNotNullParameter(id2, "id");
        return new ContentInventoryEntryComponent(type, id2, contentInventoryEntry);
    }

    public boolean equals(Object other) {
        if (this == other) {
            return true;
        }
        if (!(other instanceof ContentInventoryEntryComponent)) {
            return false;
        }
        ContentInventoryEntryComponent contentInventoryEntryComponent = (ContentInventoryEntryComponent) other;
        return this.type == contentInventoryEntryComponent.type && Intrinsics.areEqual(this.id, contentInventoryEntryComponent.id) && Intrinsics.areEqual(this.contentInventoryEntry, contentInventoryEntryComponent.contentInventoryEntry);
    }

    public final ContentInventoryEntry getContentInventoryEntry() {
        return this.contentInventoryEntry;
    }

    @Override // com.discord.chat.bridge.botuikit.Component
    @NotNull
    public String getId() {
        return this.id;
    }

    @Override // com.discord.chat.bridge.botuikit.Component
    public int getType() {
        return this.type;
    }

    public int hashCode() {
        int d6 = a3.e.d(Integer.hashCode(this.type) * 31, 31, this.id);
        ContentInventoryEntry contentInventoryEntry = this.contentInventoryEntry;
        return d6 + (contentInventoryEntry == null ? 0 : contentInventoryEntry.hashCode());
    }

    @NotNull
    public String toString() {
        int i5 = this.type;
        String str = this.id;
        ContentInventoryEntry contentInventoryEntry = this.contentInventoryEntry;
        StringBuilder n6 = a.n("ContentInventoryEntryComponent(type=", ", id=", str, i5, ", contentInventoryEntry=");
        n6.append(contentInventoryEntry);
        n6.append(")");
        return n6.toString();
    }

    public /* synthetic */ ContentInventoryEntryComponent(int i5, String str, ContentInventoryEntry contentInventoryEntry, int i6, DefaultConstructorMarker defaultConstructorMarker) {
        this(i5, str, (i6 & 4) != 0 ? null : contentInventoryEntry);
    }

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public ContentInventoryEntryComponent(int i5, @NotNull String id2, ContentInventoryEntry contentInventoryEntry) {
        super(null);
        Intrinsics.checkNotNullParameter(id2, "id");
        this.type = i5;
        this.id = id2;
        this.contentInventoryEntry = contentInventoryEntry;
    }
}
