package com.discord.chat.bridge.botuikit;

import bs.d;
import bs.h1;
import bs.v1;
import com.discord.jank_stats.JankRecordStore;
import com.facebook.react.devsupport.StackTraceHelper;
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
@Metadata(d1 = {"\u0000P\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\b\n\u0000\n\u0002\u0010\u000e\n\u0002\b\u0002\n\u0002\u0010 \n\u0002\u0018\u0002\n\u0002\b\u0004\n\u0002\u0018\u0002\n\u0002\b\u000e\n\u0002\u0010\u000b\n\u0000\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0010\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0004\b\u0087\b\u0018\u0000 +2\u00020\u0001:\u0002*+B1\u0012\u0006\u0010\u0002\u001a\u00020\u0003\u0012\u0006\u0010\u0004\u001a\u00020\u0005\u0012\n\b\u0002\u0010\u0006\u001a\u0004\u0018\u00010\u0005\u0012\f\u0010\u0007\u001a\b\u0012\u0004\u0012\u00020\t0\b¢\u0006\u0004\b\n\u0010\u000bBG\b\u0010\u0012\u0006\u0010\f\u001a\u00020\u0003\u0012\u0006\u0010\u0002\u001a\u00020\u0003\u0012\b\u0010\u0004\u001a\u0004\u0018\u00010\u0005\u0012\b\u0010\u0006\u001a\u0004\u0018\u00010\u0005\u0012\u000e\u0010\u0007\u001a\n\u0012\u0004\u0012\u00020\t\u0018\u00010\b\u0012\b\u0010\r\u001a\u0004\u0018\u00010\u000e¢\u0006\u0004\b\n\u0010\u000fJ\t\u0010\u0017\u001a\u00020\u0003HÆ\u0003J\t\u0010\u0018\u001a\u00020\u0005HÆ\u0003J\u000b\u0010\u0019\u001a\u0004\u0018\u00010\u0005HÆ\u0003J\u000f\u0010\u001a\u001a\b\u0012\u0004\u0012\u00020\t0\bHÆ\u0003J9\u0010\u001b\u001a\u00020\u00002\b\b\u0002\u0010\u0002\u001a\u00020\u00032\b\b\u0002\u0010\u0004\u001a\u00020\u00052\n\b\u0002\u0010\u0006\u001a\u0004\u0018\u00010\u00052\u000e\b\u0002\u0010\u0007\u001a\b\u0012\u0004\u0012\u00020\t0\bHÆ\u0001J\u0013\u0010\u001c\u001a\u00020\u001d2\b\u0010\u001e\u001a\u0004\u0018\u00010\u001fHÖ\u0003J\t\u0010 \u001a\u00020\u0003HÖ\u0001J\t\u0010!\u001a\u00020\u0005HÖ\u0001J%\u0010\"\u001a\u00020#2\u0006\u0010$\u001a\u00020\u00002\u0006\u0010%\u001a\u00020&2\u0006\u0010'\u001a\u00020(H\u0001¢\u0006\u0002\b)R\u0014\u0010\u0002\u001a\u00020\u0003X\u0096\u0004¢\u0006\b\n\u0000\u001a\u0004\b\u0010\u0010\u0011R\u0014\u0010\u0004\u001a\u00020\u0005X\u0096\u0004¢\u0006\b\n\u0000\u001a\u0004\b\u0012\u0010\u0013R\u0016\u0010\u0006\u001a\u0004\u0018\u00010\u0005X\u0096\u0004¢\u0006\b\n\u0000\u001a\u0004\b\u0014\u0010\u0013R\u0017\u0010\u0007\u001a\b\u0012\u0004\u0012\u00020\t0\b¢\u0006\b\n\u0000\u001a\u0004\b\u0015\u0010\u0016¨\u0006,"}, d2 = {"Lcom/discord/chat/bridge/botuikit/ActionRowComponent;", "Lcom/discord/chat/bridge/botuikit/BaseLayoutComponent;", "type", "", StackTraceHelper.ID_KEY, "", "errorText", "components", "", "Lcom/discord/chat/bridge/botuikit/Component;", "<init>", "(ILjava/lang/String;Ljava/lang/String;Ljava/util/List;)V", "seen0", "serializationConstructorMarker", "Lkotlinx/serialization/internal/SerializationConstructorMarker;", "(IILjava/lang/String;Ljava/lang/String;Ljava/util/List;Lkotlinx/serialization/internal/SerializationConstructorMarker;)V", "getType", "()I", "getId", "()Ljava/lang/String;", "getErrorText", "getComponents", "()Ljava/util/List;", "component1", "component2", "component3", "component4", "copy", "equals", "", JankRecordStore.SCREEN_OTHER, "", "hashCode", "toString", "write$Self", "", "self", "output", "Lkotlinx/serialization/encoding/CompositeEncoder;", "serialDesc", "Lkotlinx/serialization/descriptors/SerialDescriptor;", "write$Self$chat_release", "$serializer", "Companion", "chat_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
/* loaded from: classes.dex */
public final /* data */ class ActionRowComponent extends BaseLayoutComponent {

    @NotNull
    private final List<Component> components;
    private final String errorText;

    @NotNull
    private final String id;
    private final int type;

    /* renamed from: Companion, reason: from kotlin metadata */
    @NotNull
    public static final Companion INSTANCE = new Companion(null);

    @NotNull
    private static final Lazy[] $childSerializers = {null, null, null, l.b(m.f8827e, new a7.a(14))};

    @Metadata(d1 = {"\u0000\u0016\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\b\u0086\u0003\u0018\u00002\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0002\u0010\u0003J\f\u0010\u0004\u001a\b\u0012\u0004\u0012\u00020\u00060\u0005¨\u0006\u0007"}, d2 = {"Lcom/discord/chat/bridge/botuikit/ActionRowComponent$Companion;", "", "<init>", "()V", "serializer", "Lkotlinx/serialization/KSerializer;", "Lcom/discord/chat/bridge/botuikit/ActionRowComponent;", "chat_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
    public static final class Companion {
        private Companion() {
        }

        @NotNull
        public final KSerializer serializer() {
            return ActionRowComponent$$serializer.INSTANCE;
        }

        public /* synthetic */ Companion(DefaultConstructorMarker defaultConstructorMarker) {
            this();
        }
    }

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public /* synthetic */ ActionRowComponent(int i5, int i6, String str, String str2, List list, SerializationConstructorMarker serializationConstructorMarker) {
        super(null);
        if (11 != (i5 & 11)) {
            h1.l(i5, 11, ActionRowComponent$$serializer.INSTANCE.getDescriptor());
            throw null;
        }
        this.type = i6;
        this.id = str;
        if ((i5 & 4) == 0) {
            this.errorText = null;
        } else {
            this.errorText = str2;
        }
        this.components = list;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final /* synthetic */ KSerializer _childSerializers$_anonymous_() {
        return new d(ComponentSerializer.INSTANCE, 0);
    }

    /* JADX WARN: Multi-variable type inference failed */
    public static /* synthetic */ ActionRowComponent copy$default(ActionRowComponent actionRowComponent, int i5, String str, String str2, List list, int i6, Object obj) {
        if ((i6 & 1) != 0) {
            i5 = actionRowComponent.type;
        }
        if ((i6 & 2) != 0) {
            str = actionRowComponent.id;
        }
        if ((i6 & 4) != 0) {
            str2 = actionRowComponent.errorText;
        }
        if ((i6 & 8) != 0) {
            list = actionRowComponent.components;
        }
        return actionRowComponent.copy(i5, str, str2, list);
    }

    public static final /* synthetic */ void write$Self$chat_release(ActionRowComponent self, CompositeEncoder output, SerialDescriptor serialDesc) {
        Lazy[] lazyArr = $childSerializers;
        output.n(0, self.getType(), serialDesc);
        output.y(serialDesc, 1, self.getId());
        if (output.I(serialDesc, 2) || self.getErrorText() != null) {
            output.z(serialDesc, 2, v1.a, self.getErrorText());
        }
        output.g(serialDesc, 3, (KSerializer) lazyArr[3].getValue(), self.components);
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
    public final String getErrorText() {
        return this.errorText;
    }

    @NotNull
    public final List<Component> component4() {
        return this.components;
    }

    @NotNull
    public final ActionRowComponent copy(int type, @NotNull String id2, String errorText, @NotNull List<? extends Component> components) {
        Intrinsics.checkNotNullParameter(id2, "id");
        Intrinsics.checkNotNullParameter(components, "components");
        return new ActionRowComponent(type, id2, errorText, components);
    }

    public boolean equals(Object other) {
        if (this == other) {
            return true;
        }
        if (!(other instanceof ActionRowComponent)) {
            return false;
        }
        ActionRowComponent actionRowComponent = (ActionRowComponent) other;
        return this.type == actionRowComponent.type && Intrinsics.areEqual(this.id, actionRowComponent.id) && Intrinsics.areEqual(this.errorText, actionRowComponent.errorText) && Intrinsics.areEqual(this.components, actionRowComponent.components);
    }

    @NotNull
    public final List<Component> getComponents() {
        return this.components;
    }

    @Override // com.discord.chat.bridge.botuikit.BaseLayoutComponent
    public String getErrorText() {
        return this.errorText;
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
        String str = this.errorText;
        return this.components.hashCode() + ((d6 + (str == null ? 0 : str.hashCode())) * 31);
    }

    @NotNull
    public String toString() {
        int i5 = this.type;
        String str = this.id;
        String str2 = this.errorText;
        List<Component> list = this.components;
        StringBuilder n6 = a.n("ActionRowComponent(type=", ", id=", str, i5, ", errorText=");
        n6.append(str2);
        n6.append(", components=");
        n6.append(list);
        n6.append(")");
        return n6.toString();
    }

    public /* synthetic */ ActionRowComponent(int i5, String str, String str2, List list, int i6, DefaultConstructorMarker defaultConstructorMarker) {
        this(i5, str, (i6 & 4) != 0 ? null : str2, list);
    }

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    /* JADX WARN: Multi-variable type inference failed */
    public ActionRowComponent(int i5, @NotNull String id2, String str, @NotNull List<? extends Component> components) {
        super(null);
        Intrinsics.checkNotNullParameter(id2, "id");
        Intrinsics.checkNotNullParameter(components, "components");
        this.type = i5;
        this.id = id2;
        this.errorText = str;
        this.components = components;
    }
}
