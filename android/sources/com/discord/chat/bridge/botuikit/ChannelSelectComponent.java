package com.discord.chat.bridge.botuikit;

import bs.d;
import bs.h1;
import bs.o0;
import bs.v1;
import com.discord.chat.bridge.botuikit.ActionComponentState;
import com.discord.jank_stats.JankRecordStore;
import com.facebook.react.devsupport.StackTraceHelper;
import com.facebook.react.fabric.mounting.mountitems.IntBufferBatchMountItem;
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
@Metadata(d1 = {"\u0000V\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\b\n\u0000\n\u0002\u0010\u000e\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0006\n\u0002\u0010\u000b\n\u0000\n\u0002\u0010 \n\u0002\u0018\u0002\n\u0002\b\u0005\n\u0002\u0018\u0002\n\u0002\b\u001f\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0010\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0004\b\u0087\b\u0018\u0000 C2\u00020\u0001:\u0002BCBy\u0012\u0006\u0010\u0002\u001a\u00020\u0003\u0012\u0006\u0010\u0004\u001a\u00020\u0005\u0012\u0006\u0010\u0006\u001a\u00020\u0007\u0012\u0006\u0010\b\u001a\u00020\u0005\u0012\n\b\u0002\u0010\t\u001a\u0004\u0018\u00010\u0005\u0012\n\b\u0002\u0010\n\u001a\u0004\u0018\u00010\u0005\u0012\u0006\u0010\u000b\u001a\u00020\u0003\u0012\u0006\u0010\f\u001a\u00020\u0003\u0012\b\b\u0002\u0010\r\u001a\u00020\u000e\u0012\f\u0010\u000f\u001a\b\u0012\u0004\u0012\u00020\u00110\u0010\u0012\u0010\b\u0002\u0010\u0012\u001a\n\u0012\u0004\u0012\u00020\u0003\u0018\u00010\u0010¢\u0006\u0004\b\u0013\u0010\u0014B\u008d\u0001\b\u0010\u0012\u0006\u0010\u0015\u001a\u00020\u0003\u0012\u0006\u0010\u0002\u001a\u00020\u0003\u0012\b\u0010\u0004\u001a\u0004\u0018\u00010\u0005\u0012\b\u0010\u0006\u001a\u0004\u0018\u00010\u0007\u0012\b\u0010\b\u001a\u0004\u0018\u00010\u0005\u0012\b\u0010\t\u001a\u0004\u0018\u00010\u0005\u0012\b\u0010\n\u001a\u0004\u0018\u00010\u0005\u0012\u0006\u0010\u000b\u001a\u00020\u0003\u0012\u0006\u0010\f\u001a\u00020\u0003\u0012\u0006\u0010\r\u001a\u00020\u000e\u0012\u000e\u0010\u000f\u001a\n\u0012\u0004\u0012\u00020\u0011\u0018\u00010\u0010\u0012\u000e\u0010\u0012\u001a\n\u0012\u0004\u0012\u00020\u0003\u0018\u00010\u0010\u0012\b\u0010\u0016\u001a\u0004\u0018\u00010\u0017¢\u0006\u0004\b\u0013\u0010\u0018J\t\u0010)\u001a\u00020\u0003HÆ\u0003J\t\u0010*\u001a\u00020\u0005HÆ\u0003J\t\u0010+\u001a\u00020\u0007HÆ\u0003J\t\u0010,\u001a\u00020\u0005HÆ\u0003J\u000b\u0010-\u001a\u0004\u0018\u00010\u0005HÆ\u0003J\u000b\u0010.\u001a\u0004\u0018\u00010\u0005HÆ\u0003J\t\u0010/\u001a\u00020\u0003HÆ\u0003J\t\u00100\u001a\u00020\u0003HÆ\u0003J\t\u00101\u001a\u00020\u000eHÆ\u0003J\u000f\u00102\u001a\b\u0012\u0004\u0012\u00020\u00110\u0010HÆ\u0003J\u0011\u00103\u001a\n\u0012\u0004\u0012\u00020\u0003\u0018\u00010\u0010HÆ\u0003J\u0089\u0001\u00104\u001a\u00020\u00002\b\b\u0002\u0010\u0002\u001a\u00020\u00032\b\b\u0002\u0010\u0004\u001a\u00020\u00052\b\b\u0002\u0010\u0006\u001a\u00020\u00072\b\b\u0002\u0010\b\u001a\u00020\u00052\n\b\u0002\u0010\t\u001a\u0004\u0018\u00010\u00052\n\b\u0002\u0010\n\u001a\u0004\u0018\u00010\u00052\b\b\u0002\u0010\u000b\u001a\u00020\u00032\b\b\u0002\u0010\f\u001a\u00020\u00032\b\b\u0002\u0010\r\u001a\u00020\u000e2\u000e\b\u0002\u0010\u000f\u001a\b\u0012\u0004\u0012\u00020\u00110\u00102\u0010\b\u0002\u0010\u0012\u001a\n\u0012\u0004\u0012\u00020\u0003\u0018\u00010\u0010HÆ\u0001J\u0013\u00105\u001a\u00020\u000e2\b\u00106\u001a\u0004\u0018\u000107HÖ\u0003J\t\u00108\u001a\u00020\u0003HÖ\u0001J\t\u00109\u001a\u00020\u0005HÖ\u0001J%\u0010:\u001a\u00020;2\u0006\u0010<\u001a\u00020\u00002\u0006\u0010=\u001a\u00020>2\u0006\u0010?\u001a\u00020@H\u0001¢\u0006\u0002\bAR\u0014\u0010\u0002\u001a\u00020\u0003X\u0096\u0004¢\u0006\b\n\u0000\u001a\u0004\b\u0019\u0010\u001aR\u0014\u0010\u0004\u001a\u00020\u0005X\u0096\u0004¢\u0006\b\n\u0000\u001a\u0004\b\u001b\u0010\u001cR\u0014\u0010\u0006\u001a\u00020\u0007X\u0096\u0004¢\u0006\b\n\u0000\u001a\u0004\b\u001d\u0010\u001eR\u0014\u0010\b\u001a\u00020\u0005X\u0096\u0004¢\u0006\b\n\u0000\u001a\u0004\b\u001f\u0010\u001cR\u0016\u0010\t\u001a\u0004\u0018\u00010\u0005X\u0096\u0004¢\u0006\b\n\u0000\u001a\u0004\b \u0010\u001cR\u0016\u0010\n\u001a\u0004\u0018\u00010\u0005X\u0096\u0004¢\u0006\b\n\u0000\u001a\u0004\b!\u0010\u001cR\u0014\u0010\u000b\u001a\u00020\u0003X\u0096\u0004¢\u0006\b\n\u0000\u001a\u0004\b\"\u0010\u001aR\u0014\u0010\f\u001a\u00020\u0003X\u0096\u0004¢\u0006\b\n\u0000\u001a\u0004\b#\u0010\u001aR\u0014\u0010\r\u001a\u00020\u000eX\u0096\u0004¢\u0006\b\n\u0000\u001a\u0004\b$\u0010%R\u001a\u0010\u000f\u001a\b\u0012\u0004\u0012\u00020\u00110\u0010X\u0096\u0004¢\u0006\b\n\u0000\u001a\u0004\b&\u0010'R\u0019\u0010\u0012\u001a\n\u0012\u0004\u0012\u00020\u0003\u0018\u00010\u0010¢\u0006\b\n\u0000\u001a\u0004\b(\u0010'¨\u0006D"}, d2 = {"Lcom/discord/chat/bridge/botuikit/ChannelSelectComponent;", "Lcom/discord/chat/bridge/botuikit/SearchableSelectComponent;", "type", "", StackTraceHelper.ID_KEY, "", "state", "Lcom/discord/chat/bridge/botuikit/ActionComponentState;", "customId", "placeholder", ViewProps.ACCESSIBILITY_LABEL, "minValues", "maxValues", "disabled", "", "selectedOptions", "", "Lcom/discord/chat/bridge/botuikit/SearchableSelectItem;", "channelTypes", "<init>", "(ILjava/lang/String;Lcom/discord/chat/bridge/botuikit/ActionComponentState;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;IIZLjava/util/List;Ljava/util/List;)V", "seen0", "serializationConstructorMarker", "Lkotlinx/serialization/internal/SerializationConstructorMarker;", "(IILjava/lang/String;Lcom/discord/chat/bridge/botuikit/ActionComponentState;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;IIZLjava/util/List;Ljava/util/List;Lkotlinx/serialization/internal/SerializationConstructorMarker;)V", "getType", "()I", "getId", "()Ljava/lang/String;", "getState", "()Lcom/discord/chat/bridge/botuikit/ActionComponentState;", "getCustomId", "getPlaceholder", "getAccessibilityLabel", "getMinValues", "getMaxValues", "getDisabled", "()Z", "getSelectedOptions", "()Ljava/util/List;", "getChannelTypes", "component1", "component2", "component3", "component4", "component5", "component6", "component7", "component8", "component9", "component10", "component11", "copy", "equals", JankRecordStore.SCREEN_OTHER, "", "hashCode", "toString", "write$Self", "", "self", "output", "Lkotlinx/serialization/encoding/CompositeEncoder;", "serialDesc", "Lkotlinx/serialization/descriptors/SerialDescriptor;", "write$Self$chat_release", "$serializer", "Companion", "chat_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
/* loaded from: classes.dex */
public final /* data */ class ChannelSelectComponent extends SearchableSelectComponent {

    @NotNull
    private static final Lazy[] $childSerializers;

    /* renamed from: Companion, reason: from kotlin metadata */
    @NotNull
    public static final Companion INSTANCE = new Companion(null);
    private final String accessibilityLabel;
    private final List<Integer> channelTypes;

    @NotNull
    private final String customId;
    private final boolean disabled;

    @NotNull
    private final String id;
    private final int maxValues;
    private final int minValues;
    private final String placeholder;

    @NotNull
    private final List<SearchableSelectItem> selectedOptions;

    @NotNull
    private final ActionComponentState state;
    private final int type;

    @Metadata(d1 = {"\u0000\u0016\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\b\u0086\u0003\u0018\u00002\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0002\u0010\u0003J\f\u0010\u0004\u001a\b\u0012\u0004\u0012\u00020\u00060\u0005¨\u0006\u0007"}, d2 = {"Lcom/discord/chat/bridge/botuikit/ChannelSelectComponent$Companion;", "", "<init>", "()V", "serializer", "Lkotlinx/serialization/KSerializer;", "Lcom/discord/chat/bridge/botuikit/ChannelSelectComponent;", "chat_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
    public static final class Companion {
        private Companion() {
        }

        @NotNull
        public final KSerializer serializer() {
            return ChannelSelectComponent$$serializer.INSTANCE;
        }

        public /* synthetic */ Companion(DefaultConstructorMarker defaultConstructorMarker) {
            this();
        }
    }

    static {
        m mVar = m.f8827e;
        $childSerializers = new Lazy[]{null, null, null, null, null, null, null, null, null, l.b(mVar, new a7.a(15)), l.b(mVar, new a7.a(16))};
    }

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public /* synthetic */ ChannelSelectComponent(int i5, int i6, String str, ActionComponentState actionComponentState, String str2, String str3, String str4, int i10, int i11, boolean z5, List list, List list2, SerializationConstructorMarker serializationConstructorMarker) {
        super(i5, serializationConstructorMarker);
        if (719 != (i5 & 719)) {
            h1.l(i5, 719, ChannelSelectComponent$$serializer.INSTANCE.getDescriptor());
            throw null;
        }
        this.type = i6;
        this.id = str;
        this.state = actionComponentState;
        this.customId = str2;
        if ((i5 & 16) == 0) {
            this.placeholder = null;
        } else {
            this.placeholder = str3;
        }
        if ((i5 & 32) == 0) {
            this.accessibilityLabel = null;
        } else {
            this.accessibilityLabel = str4;
        }
        this.minValues = i10;
        this.maxValues = i11;
        if ((i5 & IntBufferBatchMountItem.INSTRUCTION_UPDATE_EVENT_EMITTER) == 0) {
            this.disabled = false;
        } else {
            this.disabled = z5;
        }
        this.selectedOptions = list;
        if ((i5 & IntBufferBatchMountItem.INSTRUCTION_UPDATE_OVERFLOW_INSET) == 0) {
            this.channelTypes = null;
        } else {
            this.channelTypes = list2;
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final /* synthetic */ KSerializer _childSerializers$_anonymous_() {
        return new d(SearchableSelectItem$$serializer.INSTANCE, 0);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final /* synthetic */ KSerializer _childSerializers$_anonymous_$0() {
        return new d(o0.a, 0);
    }

    public static /* synthetic */ ChannelSelectComponent copy$default(ChannelSelectComponent channelSelectComponent, int i5, String str, ActionComponentState actionComponentState, String str2, String str3, String str4, int i6, int i10, boolean z5, List list, List list2, int i11, Object obj) {
        if ((i11 & 1) != 0) {
            i5 = channelSelectComponent.type;
        }
        if ((i11 & 2) != 0) {
            str = channelSelectComponent.id;
        }
        if ((i11 & 4) != 0) {
            actionComponentState = channelSelectComponent.state;
        }
        if ((i11 & 8) != 0) {
            str2 = channelSelectComponent.customId;
        }
        if ((i11 & 16) != 0) {
            str3 = channelSelectComponent.placeholder;
        }
        if ((i11 & 32) != 0) {
            str4 = channelSelectComponent.accessibilityLabel;
        }
        if ((i11 & 64) != 0) {
            i6 = channelSelectComponent.minValues;
        }
        if ((i11 & IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT) != 0) {
            i10 = channelSelectComponent.maxValues;
        }
        if ((i11 & IntBufferBatchMountItem.INSTRUCTION_UPDATE_EVENT_EMITTER) != 0) {
            z5 = channelSelectComponent.disabled;
        }
        if ((i11 & IntBufferBatchMountItem.INSTRUCTION_UPDATE_PADDING) != 0) {
            list = channelSelectComponent.selectedOptions;
        }
        if ((i11 & IntBufferBatchMountItem.INSTRUCTION_UPDATE_OVERFLOW_INSET) != 0) {
            list2 = channelSelectComponent.channelTypes;
        }
        List list3 = list;
        List list4 = list2;
        int i12 = i10;
        boolean z6 = z5;
        String str5 = str4;
        int i13 = i6;
        String str6 = str3;
        ActionComponentState actionComponentState2 = actionComponentState;
        return channelSelectComponent.copy(i5, str, actionComponentState2, str2, str6, str5, i13, i12, z6, list3, list4);
    }

    public static final /* synthetic */ void write$Self$chat_release(ChannelSelectComponent self, CompositeEncoder output, SerialDescriptor serialDesc) {
        SelectComponent.write$Self(self, output, serialDesc);
        Lazy[] lazyArr = $childSerializers;
        output.n(0, self.getType(), serialDesc);
        output.y(serialDesc, 1, self.getId());
        output.g(serialDesc, 2, ActionComponentState.Serializer.INSTANCE, self.getState());
        output.y(serialDesc, 3, self.getCustomId());
        if (output.I(serialDesc, 4) || self.getPlaceholder() != null) {
            output.z(serialDesc, 4, v1.a, self.getPlaceholder());
        }
        if (output.I(serialDesc, 5) || self.getAccessibilityLabel() != null) {
            output.z(serialDesc, 5, v1.a, self.getAccessibilityLabel());
        }
        output.n(6, self.getMinValues(), serialDesc);
        output.n(7, self.getMaxValues(), serialDesc);
        if (output.I(serialDesc, 8) || self.getDisabled()) {
            output.x(serialDesc, 8, self.getDisabled());
        }
        output.g(serialDesc, 9, (KSerializer) lazyArr[9].getValue(), self.getSelectedOptions());
        if (!output.I(serialDesc, 10) && self.channelTypes == null) {
            return;
        }
        output.z(serialDesc, 10, (KSerializer) lazyArr[10].getValue(), self.channelTypes);
    }

    /* renamed from: component1, reason: from getter */
    public final int getType() {
        return this.type;
    }

    @NotNull
    public final List<SearchableSelectItem> component10() {
        return this.selectedOptions;
    }

    public final List<Integer> component11() {
        return this.channelTypes;
    }

    @NotNull
    /* renamed from: component2, reason: from getter */
    public final String getId() {
        return this.id;
    }

    @NotNull
    /* renamed from: component3, reason: from getter */
    public final ActionComponentState getState() {
        return this.state;
    }

    @NotNull
    /* renamed from: component4, reason: from getter */
    public final String getCustomId() {
        return this.customId;
    }

    /* renamed from: component5, reason: from getter */
    public final String getPlaceholder() {
        return this.placeholder;
    }

    /* renamed from: component6, reason: from getter */
    public final String getAccessibilityLabel() {
        return this.accessibilityLabel;
    }

    /* renamed from: component7, reason: from getter */
    public final int getMinValues() {
        return this.minValues;
    }

    /* renamed from: component8, reason: from getter */
    public final int getMaxValues() {
        return this.maxValues;
    }

    /* renamed from: component9, reason: from getter */
    public final boolean getDisabled() {
        return this.disabled;
    }

    @NotNull
    public final ChannelSelectComponent copy(int type, @NotNull String id2, @NotNull ActionComponentState state, @NotNull String customId, String placeholder, String accessibilityLabel, int minValues, int maxValues, boolean disabled, @NotNull List<SearchableSelectItem> selectedOptions, List<Integer> channelTypes) {
        Intrinsics.checkNotNullParameter(id2, "id");
        Intrinsics.checkNotNullParameter(state, "state");
        Intrinsics.checkNotNullParameter(customId, "customId");
        Intrinsics.checkNotNullParameter(selectedOptions, "selectedOptions");
        return new ChannelSelectComponent(type, id2, state, customId, placeholder, accessibilityLabel, minValues, maxValues, disabled, selectedOptions, channelTypes);
    }

    public boolean equals(Object other) {
        if (this == other) {
            return true;
        }
        if (!(other instanceof ChannelSelectComponent)) {
            return false;
        }
        ChannelSelectComponent channelSelectComponent = (ChannelSelectComponent) other;
        return this.type == channelSelectComponent.type && Intrinsics.areEqual(this.id, channelSelectComponent.id) && this.state == channelSelectComponent.state && Intrinsics.areEqual(this.customId, channelSelectComponent.customId) && Intrinsics.areEqual(this.placeholder, channelSelectComponent.placeholder) && Intrinsics.areEqual(this.accessibilityLabel, channelSelectComponent.accessibilityLabel) && this.minValues == channelSelectComponent.minValues && this.maxValues == channelSelectComponent.maxValues && this.disabled == channelSelectComponent.disabled && Intrinsics.areEqual(this.selectedOptions, channelSelectComponent.selectedOptions) && Intrinsics.areEqual(this.channelTypes, channelSelectComponent.channelTypes);
    }

    @Override // com.discord.chat.bridge.botuikit.SelectComponent
    public String getAccessibilityLabel() {
        return this.accessibilityLabel;
    }

    public final List<Integer> getChannelTypes() {
        return this.channelTypes;
    }

    @Override // com.discord.chat.bridge.botuikit.BaseActionComponent
    @NotNull
    public String getCustomId() {
        return this.customId;
    }

    @Override // com.discord.chat.bridge.botuikit.SelectComponent
    public boolean getDisabled() {
        return this.disabled;
    }

    @Override // com.discord.chat.bridge.botuikit.Component
    @NotNull
    public String getId() {
        return this.id;
    }

    @Override // com.discord.chat.bridge.botuikit.SelectComponent
    public int getMaxValues() {
        return this.maxValues;
    }

    @Override // com.discord.chat.bridge.botuikit.SelectComponent
    public int getMinValues() {
        return this.minValues;
    }

    @Override // com.discord.chat.bridge.botuikit.SelectComponent
    public String getPlaceholder() {
        return this.placeholder;
    }

    @Override // com.discord.chat.bridge.botuikit.SearchableSelectComponent
    @NotNull
    public List<SearchableSelectItem> getSelectedOptions() {
        return this.selectedOptions;
    }

    @Override // com.discord.chat.bridge.botuikit.BaseActionComponent
    @NotNull
    public ActionComponentState getState() {
        return this.state;
    }

    @Override // com.discord.chat.bridge.botuikit.Component
    public int getType() {
        return this.type;
    }

    public int hashCode() {
        int d6 = a3.e.d((this.state.hashCode() + a3.e.d(Integer.hashCode(this.type) * 31, 31, this.id)) * 31, 31, this.customId);
        String str = this.placeholder;
        int hashCode = (d6 + (str == null ? 0 : str.hashCode())) * 31;
        String str2 = this.accessibilityLabel;
        int e9 = a3.e.e(this.selectedOptions, k0.d.d(a.u(this.maxValues, a.u(this.minValues, (hashCode + (str2 == null ? 0 : str2.hashCode())) * 31, 31), 31), 31, this.disabled), 31);
        List<Integer> list = this.channelTypes;
        return e9 + (list != null ? list.hashCode() : 0);
    }

    @NotNull
    public String toString() {
        int i5 = this.type;
        String str = this.id;
        ActionComponentState actionComponentState = this.state;
        String str2 = this.customId;
        String str3 = this.placeholder;
        String str4 = this.accessibilityLabel;
        int i6 = this.minValues;
        int i10 = this.maxValues;
        boolean z5 = this.disabled;
        List<SearchableSelectItem> list = this.selectedOptions;
        List<Integer> list2 = this.channelTypes;
        StringBuilder n6 = a.n("ChannelSelectComponent(type=", ", id=", str, i5, ", state=");
        n6.append(actionComponentState);
        n6.append(", customId=");
        n6.append(str2);
        n6.append(", placeholder=");
        a3.e.A(n6, str3, ", accessibilityLabel=", str4, ", minValues=");
        a3.e.y(n6, i6, ", maxValues=", i10, ", disabled=");
        n6.append(z5);
        n6.append(", selectedOptions=");
        n6.append(list);
        n6.append(", channelTypes=");
        n6.append(list2);
        n6.append(")");
        return n6.toString();
    }

    public /* synthetic */ ChannelSelectComponent(int i5, String str, ActionComponentState actionComponentState, String str2, String str3, String str4, int i6, int i10, boolean z5, List list, List list2, int i11, DefaultConstructorMarker defaultConstructorMarker) {
        this(i5, str, actionComponentState, str2, (i11 & 16) != 0 ? null : str3, (i11 & 32) != 0 ? null : str4, i6, i10, (i11 & IntBufferBatchMountItem.INSTRUCTION_UPDATE_EVENT_EMITTER) != 0 ? false : z5, list, (i11 & IntBufferBatchMountItem.INSTRUCTION_UPDATE_OVERFLOW_INSET) != 0 ? null : list2);
    }

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public ChannelSelectComponent(int i5, @NotNull String id2, @NotNull ActionComponentState state, @NotNull String customId, String str, String str2, int i6, int i10, boolean z5, @NotNull List<SearchableSelectItem> selectedOptions, List<Integer> list) {
        super(null);
        Intrinsics.checkNotNullParameter(id2, "id");
        Intrinsics.checkNotNullParameter(state, "state");
        Intrinsics.checkNotNullParameter(customId, "customId");
        Intrinsics.checkNotNullParameter(selectedOptions, "selectedOptions");
        this.type = i5;
        this.id = id2;
        this.state = state;
        this.customId = customId;
        this.placeholder = str;
        this.accessibilityLabel = str2;
        this.minValues = i6;
        this.maxValues = i10;
        this.disabled = z5;
        this.selectedOptions = selectedOptions;
        this.channelTypes = list;
    }
}
