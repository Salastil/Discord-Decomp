package com.discord.chat.bridge.contentnode;

import bs.d;
import bs.h1;
import bs.t0;
import com.discord.chat.bridge.botuikit.b;
import com.discord.jank_stats.JankRecordStore;
import com.facebook.react.modules.dialog.AlertFragment;
import com.facebook.react.uimanager.ViewProps;
import fo.l;
import fo.m;
import java.util.List;
import kotlin.Lazy;
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
@Metadata(d1 = {"\u0000P\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\t\n\u0000\n\u0002\u0010\u000b\n\u0000\n\u0002\u0010 \n\u0002\b\u0003\n\u0002\u0010\b\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u000f\n\u0002\u0010\u0000\n\u0002\b\u0002\n\u0002\u0010\u000e\n\u0000\n\u0002\u0010\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0004\b\u0087\b\u0018\u0000 *2\u00020\u0001:\u0002)*B1\u0012\n\b\u0002\u0010\u0002\u001a\u0004\u0018\u00010\u0003\u0012\b\b\u0002\u0010\u0004\u001a\u00020\u0005\u0012\u0012\u0010\u0006\u001a\u000e\u0012\n\u0012\b\u0012\u0004\u0012\u00020\u00010\u00070\u0007¢\u0006\u0004\b\b\u0010\tBC\b\u0010\u0012\u0006\u0010\n\u001a\u00020\u000b\u0012\b\u0010\u0002\u001a\u0004\u0018\u00010\u0003\u0012\u0006\u0010\u0004\u001a\u00020\u0005\u0012\u0014\u0010\u0006\u001a\u0010\u0012\n\u0012\b\u0012\u0004\u0012\u00020\u00010\u0007\u0018\u00010\u0007\u0012\b\u0010\f\u001a\u0004\u0018\u00010\r¢\u0006\u0004\b\b\u0010\u000eJ\u0010\u0010\u0016\u001a\u0004\u0018\u00010\u0003HÆ\u0003¢\u0006\u0002\u0010\u0010J\t\u0010\u0017\u001a\u00020\u0005HÆ\u0003J\u0015\u0010\u0018\u001a\u000e\u0012\n\u0012\b\u0012\u0004\u0012\u00020\u00010\u00070\u0007HÆ\u0003J:\u0010\u0019\u001a\u00020\u00002\n\b\u0002\u0010\u0002\u001a\u0004\u0018\u00010\u00032\b\b\u0002\u0010\u0004\u001a\u00020\u00052\u0014\b\u0002\u0010\u0006\u001a\u000e\u0012\n\u0012\b\u0012\u0004\u0012\u00020\u00010\u00070\u0007HÆ\u0001¢\u0006\u0002\u0010\u001aJ\u0013\u0010\u001b\u001a\u00020\u00052\b\u0010\u001c\u001a\u0004\u0018\u00010\u001dHÖ\u0003J\t\u0010\u001e\u001a\u00020\u000bHÖ\u0001J\t\u0010\u001f\u001a\u00020 HÖ\u0001J%\u0010!\u001a\u00020\"2\u0006\u0010#\u001a\u00020\u00002\u0006\u0010$\u001a\u00020%2\u0006\u0010&\u001a\u00020'H\u0001¢\u0006\u0002\b(R\u0015\u0010\u0002\u001a\u0004\u0018\u00010\u0003¢\u0006\n\n\u0002\u0010\u0011\u001a\u0004\b\u000f\u0010\u0010R\u0011\u0010\u0004\u001a\u00020\u0005¢\u0006\b\n\u0000\u001a\u0004\b\u0012\u0010\u0013R\u001d\u0010\u0006\u001a\u000e\u0012\n\u0012\b\u0012\u0004\u0012\u00020\u00010\u00070\u0007¢\u0006\b\n\u0000\u001a\u0004\b\u0014\u0010\u0015¨\u0006+"}, d2 = {"Lcom/discord/chat/bridge/contentnode/BulletListContentNode;", "Lcom/discord/chat/bridge/contentnode/ContentNode;", ViewProps.START, "", "ordered", "", AlertFragment.ARG_ITEMS, "", "<init>", "(Ljava/lang/Long;ZLjava/util/List;)V", "seen0", "", "serializationConstructorMarker", "Lkotlinx/serialization/internal/SerializationConstructorMarker;", "(ILjava/lang/Long;ZLjava/util/List;Lkotlinx/serialization/internal/SerializationConstructorMarker;)V", "getStart", "()Ljava/lang/Long;", "Ljava/lang/Long;", "getOrdered", "()Z", "getItems", "()Ljava/util/List;", "component1", "component2", "component3", "copy", "(Ljava/lang/Long;ZLjava/util/List;)Lcom/discord/chat/bridge/contentnode/BulletListContentNode;", "equals", JankRecordStore.SCREEN_OTHER, "", "hashCode", "toString", "", "write$Self", "", "self", "output", "Lkotlinx/serialization/encoding/CompositeEncoder;", "serialDesc", "Lkotlinx/serialization/descriptors/SerialDescriptor;", "write$Self$chat_release", "$serializer", "Companion", "chat_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
/* loaded from: classes.dex */
public final /* data */ class BulletListContentNode extends ContentNode {

    @NotNull
    private final List<List<ContentNode>> items;
    private final boolean ordered;
    private final Long start;

    /* renamed from: Companion, reason: from kotlin metadata */
    @NotNull
    public static final Companion INSTANCE = new Companion(null);

    @NotNull
    private static final Lazy[] $childSerializers = {null, null, l.b(m.f8827e, new b(3))};

    @Metadata(d1 = {"\u0000\u0016\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\b\u0086\u0003\u0018\u00002\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0002\u0010\u0003J\f\u0010\u0004\u001a\b\u0012\u0004\u0012\u00020\u00060\u0005¨\u0006\u0007"}, d2 = {"Lcom/discord/chat/bridge/contentnode/BulletListContentNode$Companion;", "", "<init>", "()V", "serializer", "Lkotlinx/serialization/KSerializer;", "Lcom/discord/chat/bridge/contentnode/BulletListContentNode;", "chat_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
    public static final class Companion {
        private Companion() {
        }

        @NotNull
        public final KSerializer serializer() {
            return BulletListContentNode$$serializer.INSTANCE;
        }

        public /* synthetic */ Companion(DefaultConstructorMarker defaultConstructorMarker) {
            this();
        }
    }

    /* JADX WARN: Illegal instructions before constructor call */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public /* synthetic */ BulletListContentNode(int i5, Long l6, boolean z5, List list, SerializationConstructorMarker serializationConstructorMarker) {
        super(r0);
        DefaultConstructorMarker defaultConstructorMarker = null;
        if (4 != (i5 & 4)) {
            h1.l(i5, 4, BulletListContentNode$$serializer.INSTANCE.getDescriptor());
            throw null;
        }
        if ((i5 & 1) == 0) {
            this.start = null;
        } else {
            this.start = l6;
        }
        if ((i5 & 2) == 0) {
            this.ordered = false;
        } else {
            this.ordered = z5;
        }
        this.items = list;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final /* synthetic */ KSerializer _childSerializers$_anonymous_() {
        return new d(new d(ContentNodeSerializer.INSTANCE, 0), 0);
    }

    /* JADX WARN: Multi-variable type inference failed */
    public static /* synthetic */ BulletListContentNode copy$default(BulletListContentNode bulletListContentNode, Long l6, boolean z5, List list, int i5, Object obj) {
        if ((i5 & 1) != 0) {
            l6 = bulletListContentNode.start;
        }
        if ((i5 & 2) != 0) {
            z5 = bulletListContentNode.ordered;
        }
        if ((i5 & 4) != 0) {
            list = bulletListContentNode.items;
        }
        return bulletListContentNode.copy(l6, z5, list);
    }

    public static final /* synthetic */ void write$Self$chat_release(BulletListContentNode self, CompositeEncoder output, SerialDescriptor serialDesc) {
        Lazy[] lazyArr = $childSerializers;
        if (output.I(serialDesc, 0) || self.start != null) {
            output.z(serialDesc, 0, t0.a, self.start);
        }
        if (output.I(serialDesc, 1) || self.ordered) {
            output.x(serialDesc, 1, self.ordered);
        }
        output.g(serialDesc, 2, (KSerializer) lazyArr[2].getValue(), self.items);
    }

    /* renamed from: component1, reason: from getter */
    public final Long getStart() {
        return this.start;
    }

    /* renamed from: component2, reason: from getter */
    public final boolean getOrdered() {
        return this.ordered;
    }

    @NotNull
    public final List<List<ContentNode>> component3() {
        return this.items;
    }

    @NotNull
    public final BulletListContentNode copy(Long start, boolean ordered, @NotNull List<? extends List<? extends ContentNode>> items) {
        Intrinsics.checkNotNullParameter(items, "items");
        return new BulletListContentNode(start, ordered, items);
    }

    public boolean equals(Object other) {
        if (this == other) {
            return true;
        }
        if (!(other instanceof BulletListContentNode)) {
            return false;
        }
        BulletListContentNode bulletListContentNode = (BulletListContentNode) other;
        return Intrinsics.areEqual(this.start, bulletListContentNode.start) && this.ordered == bulletListContentNode.ordered && Intrinsics.areEqual(this.items, bulletListContentNode.items);
    }

    @NotNull
    public final List<List<ContentNode>> getItems() {
        return this.items;
    }

    public final boolean getOrdered() {
        return this.ordered;
    }

    public final Long getStart() {
        return this.start;
    }

    public int hashCode() {
        Long l6 = this.start;
        return this.items.hashCode() + k0.d.d((l6 == null ? 0 : l6.hashCode()) * 31, 31, this.ordered);
    }

    @NotNull
    public String toString() {
        return "BulletListContentNode(start=" + this.start + ", ordered=" + this.ordered + ", items=" + this.items + ")";
    }

    public /* synthetic */ BulletListContentNode(Long l6, boolean z5, List list, int i5, DefaultConstructorMarker defaultConstructorMarker) {
        this((i5 & 1) != 0 ? null : l6, (i5 & 2) != 0 ? false : z5, list);
    }

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    /* JADX WARN: Multi-variable type inference failed */
    public BulletListContentNode(Long l6, boolean z5, @NotNull List<? extends List<? extends ContentNode>> items) {
        super(null);
        Intrinsics.checkNotNullParameter(items, "items");
        this.start = l6;
        this.ordered = z5;
        this.items = items;
    }
}
