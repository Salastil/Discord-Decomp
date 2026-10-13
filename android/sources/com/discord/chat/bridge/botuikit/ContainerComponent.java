package com.discord.chat.bridge.botuikit;

import bs.c1;
import bs.d;
import bs.h1;
import bs.o0;
import bs.v1;
import com.discord.chat.bridge.spoiler.SpoilerableData;
import com.discord.jank_stats.JankRecordStore;
import com.facebook.react.devsupport.StackTraceHelper;
import com.facebook.react.fabric.mounting.mountitems.IntBufferBatchMountItem;
import fo.l;
import fo.m;
import java.util.List;
import kotlin.Lazy;
import kotlin.Metadata;
import kotlin.jvm.internal.DefaultConstructorMarker;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.SourceDebugExtension;
import kotlin.text.StringsKt;
import kotlinx.serialization.KSerializer;
import kotlinx.serialization.descriptors.SerialDescriptor;
import kotlinx.serialization.encoding.CompositeEncoder;
import kotlinx.serialization.internal.SerializationConstructorMarker;
import org.jetbrains.annotations.NotNull;
import xr.e;

@e
@Metadata(d1 = {"\u0000\\\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\b\n\u0000\n\u0002\u0010\u000e\n\u0002\b\u0002\n\u0002\u0010 \n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0010\u000b\n\u0002\b\u0007\n\u0002\u0010\u0001\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u001d\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0010\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0004\b\u0087\b\u0018\u0000 A2\u00020\u00012\u00020\u0002:\u0002@AB[\u0012\u0006\u0010\u0003\u001a\u00020\u0004\u0012\u0006\u0010\u0005\u001a\u00020\u0006\u0012\n\b\u0002\u0010\u0007\u001a\u0004\u0018\u00010\u0006\u0012\f\u0010\b\u001a\b\u0012\u0004\u0012\u00020\n0\t\u0012\n\b\u0003\u0010\u000b\u001a\u0004\u0018\u00010\u0004\u0012\u0006\u0010\f\u001a\u00020\r\u0012\b\u0010\u000e\u001a\u0004\u0018\u00010\u0006\u0012\n\b\u0003\u0010\u000f\u001a\u0004\u0018\u00010\u0004¢\u0006\u0004\b\u0010\u0010\u0011B\u0081\u0001\b\u0010\u0012\u0006\u0010\u0012\u001a\u00020\u0004\u0012\u0006\u0010\u0003\u001a\u00020\u0004\u0012\b\u0010\u0005\u001a\u0004\u0018\u00010\u0006\u0012\b\u0010\u0007\u001a\u0004\u0018\u00010\u0006\u0012\u000e\u0010\b\u001a\n\u0012\u0004\u0012\u00020\n\u0018\u00010\t\u0012\b\u0010\u000b\u001a\u0004\u0018\u00010\u0004\u0012\u0006\u0010\f\u001a\u00020\r\u0012\b\u0010\u000e\u001a\u0004\u0018\u00010\u0006\u0012\b\u0010\u000f\u001a\u0004\u0018\u00010\u0004\u0012\b\u0010\u0013\u001a\u0004\u0018\u00010\u0006\u0012\b\u0010\u0014\u001a\u0004\u0018\u00010\u0015\u0012\b\u0010\u0016\u001a\u0004\u0018\u00010\u0017¢\u0006\u0004\b\u0010\u0010\u0018J\t\u0010)\u001a\u00020\u0004HÆ\u0003J\t\u0010*\u001a\u00020\u0006HÆ\u0003J\u000b\u0010+\u001a\u0004\u0018\u00010\u0006HÆ\u0003J\u000f\u0010,\u001a\b\u0012\u0004\u0012\u00020\n0\tHÆ\u0003J\u0010\u0010-\u001a\u0004\u0018\u00010\u0004HÆ\u0003¢\u0006\u0002\u0010!J\t\u0010.\u001a\u00020\rHÆ\u0003J\u000b\u0010/\u001a\u0004\u0018\u00010\u0006HÆ\u0003J\u0010\u00100\u001a\u0004\u0018\u00010\u0004HÆ\u0003¢\u0006\u0002\u0010!Jl\u00101\u001a\u00020\u00002\b\b\u0002\u0010\u0003\u001a\u00020\u00042\b\b\u0002\u0010\u0005\u001a\u00020\u00062\n\b\u0002\u0010\u0007\u001a\u0004\u0018\u00010\u00062\u000e\b\u0002\u0010\b\u001a\b\u0012\u0004\u0012\u00020\n0\t2\n\b\u0003\u0010\u000b\u001a\u0004\u0018\u00010\u00042\b\b\u0002\u0010\f\u001a\u00020\r2\n\b\u0002\u0010\u000e\u001a\u0004\u0018\u00010\u00062\n\b\u0003\u0010\u000f\u001a\u0004\u0018\u00010\u0004HÆ\u0001¢\u0006\u0002\u00102J\u0013\u00103\u001a\u00020\r2\b\u00104\u001a\u0004\u0018\u000105HÖ\u0003J\t\u00106\u001a\u00020\u0004HÖ\u0001J\t\u00107\u001a\u00020\u0006HÖ\u0001J%\u00108\u001a\u0002092\u0006\u0010:\u001a\u00020\u00002\u0006\u0010;\u001a\u00020<2\u0006\u0010=\u001a\u00020>H\u0001¢\u0006\u0002\b?R\u0014\u0010\u0003\u001a\u00020\u0004X\u0096\u0004¢\u0006\b\n\u0000\u001a\u0004\b\u0019\u0010\u001aR\u0014\u0010\u0005\u001a\u00020\u0006X\u0096\u0004¢\u0006\b\n\u0000\u001a\u0004\b\u001b\u0010\u001cR\u0016\u0010\u0007\u001a\u0004\u0018\u00010\u0006X\u0096\u0004¢\u0006\b\n\u0000\u001a\u0004\b\u001d\u0010\u001cR\u0017\u0010\b\u001a\b\u0012\u0004\u0012\u00020\n0\t¢\u0006\b\n\u0000\u001a\u0004\b\u001e\u0010\u001fR\u0015\u0010\u000b\u001a\u0004\u0018\u00010\u0004¢\u0006\n\n\u0002\u0010\"\u001a\u0004\b \u0010!R\u0011\u0010\f\u001a\u00020\r¢\u0006\b\n\u0000\u001a\u0004\b\f\u0010#R\u0013\u0010\u000e\u001a\u0004\u0018\u00010\u0006¢\u0006\b\n\u0000\u001a\u0004\b$\u0010\u001cR\u0015\u0010\u000f\u001a\u0004\u0018\u00010\u0004¢\u0006\n\n\u0002\u0010\"\u001a\u0004\b%\u0010!R\u0016\u0010\u0013\u001a\u0004\u0018\u00010\u0006X\u0096\u0004¢\u0006\b\n\u0000\u001a\u0004\b&\u0010\u001cR\u0016\u0010\u0014\u001a\u0004\u0018\u00010\u0015X\u0096\u0004¢\u0006\b\n\u0000\u001a\u0004\b'\u0010(¨\u0006B"}, d2 = {"Lcom/discord/chat/bridge/botuikit/ContainerComponent;", "Lcom/discord/chat/bridge/botuikit/BaseLayoutComponent;", "Lcom/discord/chat/bridge/spoiler/SpoilerableData;", "type", "", StackTraceHelper.ID_KEY, "", "errorText", "components", "", "Lcom/discord/chat/bridge/botuikit/Component;", "accentColor", "isSpoiler", "", "spoilerDescription", "themedBackgroundColor", "<init>", "(ILjava/lang/String;Ljava/lang/String;Ljava/util/List;Ljava/lang/Integer;ZLjava/lang/String;Ljava/lang/Integer;)V", "seen0", "spoilerOrNull", "obscureOrNull", "", "serializationConstructorMarker", "Lkotlinx/serialization/internal/SerializationConstructorMarker;", "(IILjava/lang/String;Ljava/lang/String;Ljava/util/List;Ljava/lang/Integer;ZLjava/lang/String;Ljava/lang/Integer;Ljava/lang/String;Ljava/lang/Void;Lkotlinx/serialization/internal/SerializationConstructorMarker;)V", "getType", "()I", "getId", "()Ljava/lang/String;", "getErrorText", "getComponents", "()Ljava/util/List;", "getAccentColor", "()Ljava/lang/Integer;", "Ljava/lang/Integer;", "()Z", "getSpoilerDescription", "getThemedBackgroundColor", "getSpoilerOrNull", "getObscureOrNull", "()Ljava/lang/Void;", "component1", "component2", "component3", "component4", "component5", "component6", "component7", "component8", "copy", "(ILjava/lang/String;Ljava/lang/String;Ljava/util/List;Ljava/lang/Integer;ZLjava/lang/String;Ljava/lang/Integer;)Lcom/discord/chat/bridge/botuikit/ContainerComponent;", "equals", JankRecordStore.SCREEN_OTHER, "", "hashCode", "toString", "write$Self", "", "self", "output", "Lkotlinx/serialization/encoding/CompositeEncoder;", "serialDesc", "Lkotlinx/serialization/descriptors/SerialDescriptor;", "write$Self$chat_release", "$serializer", "Companion", "chat_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
@SourceDebugExtension({"SMAP\nContainerComponent.kt\nKotlin\n*S Kotlin\n*F\n+ 1 ContainerComponent.kt\ncom/discord/chat/bridge/botuikit/ContainerComponent\n+ 2 fake.kt\nkotlin/jvm/internal/FakeKt\n*L\n1#1,24:1\n1#2:25\n*E\n"})
/* loaded from: classes.dex */
public final /* data */ class ContainerComponent extends BaseLayoutComponent implements SpoilerableData {
    private final Integer accentColor;

    @NotNull
    private final List<Component> components;
    private final String errorText;

    @NotNull
    private final String id;
    private final boolean isSpoiler;
    private final Void obscureOrNull;
    private final String spoilerDescription;
    private final String spoilerOrNull;
    private final Integer themedBackgroundColor;
    private final int type;

    /* renamed from: Companion, reason: from kotlin metadata */
    @NotNull
    public static final Companion INSTANCE = new Companion(null);

    @NotNull
    private static final Lazy[] $childSerializers = {null, null, null, l.b(m.f8827e, new a7.a(18)), null, null, null, null, null, null};

    @Metadata(d1 = {"\u0000\u0016\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\b\u0086\u0003\u0018\u00002\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0002\u0010\u0003J\f\u0010\u0004\u001a\b\u0012\u0004\u0012\u00020\u00060\u0005¨\u0006\u0007"}, d2 = {"Lcom/discord/chat/bridge/botuikit/ContainerComponent$Companion;", "", "<init>", "()V", "serializer", "Lkotlinx/serialization/KSerializer;", "Lcom/discord/chat/bridge/botuikit/ContainerComponent;", "chat_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
    public static final class Companion {
        private Companion() {
        }

        @NotNull
        public final KSerializer serializer() {
            return ContainerComponent$$serializer.INSTANCE;
        }

        public /* synthetic */ Companion(DefaultConstructorMarker defaultConstructorMarker) {
            this();
        }
    }

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public /* synthetic */ ContainerComponent(int i5, int i6, String str, String str2, List list, Integer num, boolean z5, String str3, Integer num2, String str4, Void r13, SerializationConstructorMarker serializationConstructorMarker) {
        super(null);
        if (107 != (i5 & 107)) {
            h1.l(i5, 107, ContainerComponent$$serializer.INSTANCE.getDescriptor());
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
        if ((i5 & 16) == 0) {
            this.accentColor = null;
        } else {
            this.accentColor = num;
        }
        this.isSpoiler = z5;
        this.spoilerDescription = str3;
        if ((i5 & IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT) == 0) {
            this.themedBackgroundColor = null;
        } else {
            this.themedBackgroundColor = num2;
        }
        if ((i5 & IntBufferBatchMountItem.INSTRUCTION_UPDATE_EVENT_EMITTER) == 0) {
            this.spoilerOrNull = str3 == null || StringsKt.K(str3) ? null : str3;
        } else {
            this.spoilerOrNull = str4;
        }
        if ((i5 & IntBufferBatchMountItem.INSTRUCTION_UPDATE_PADDING) == 0) {
            this.obscureOrNull = null;
        } else {
            this.obscureOrNull = r13;
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final /* synthetic */ KSerializer _childSerializers$_anonymous_() {
        return new d(ComponentSerializer.INSTANCE, 0);
    }

    public static /* synthetic */ ContainerComponent copy$default(ContainerComponent containerComponent, int i5, String str, String str2, List list, Integer num, boolean z5, String str3, Integer num2, int i6, Object obj) {
        if ((i6 & 1) != 0) {
            i5 = containerComponent.type;
        }
        if ((i6 & 2) != 0) {
            str = containerComponent.id;
        }
        if ((i6 & 4) != 0) {
            str2 = containerComponent.errorText;
        }
        if ((i6 & 8) != 0) {
            list = containerComponent.components;
        }
        if ((i6 & 16) != 0) {
            num = containerComponent.accentColor;
        }
        if ((i6 & 32) != 0) {
            z5 = containerComponent.isSpoiler;
        }
        if ((i6 & 64) != 0) {
            str3 = containerComponent.spoilerDescription;
        }
        if ((i6 & IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT) != 0) {
            num2 = containerComponent.themedBackgroundColor;
        }
        String str4 = str3;
        Integer num3 = num2;
        Integer num4 = num;
        boolean z6 = z5;
        return containerComponent.copy(i5, str, str2, list, num4, z6, str4, num3);
    }

    /* JADX WARN: Code restructure failed: missing block: B:20:0x0087, code lost:
    
        if (kotlin.jvm.internal.Intrinsics.areEqual(r2, r3) == false) goto L30;
     */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public static final /* synthetic */ void write$Self$chat_release(ContainerComponent self, CompositeEncoder output, SerialDescriptor serialDesc) {
        Lazy[] lazyArr = $childSerializers;
        output.n(0, self.getType(), serialDesc);
        output.y(serialDesc, 1, self.getId());
        if (output.I(serialDesc, 2) || self.getErrorText() != null) {
            output.z(serialDesc, 2, v1.a, self.getErrorText());
        }
        output.g(serialDesc, 3, (KSerializer) lazyArr[3].getValue(), self.components);
        if (output.I(serialDesc, 4) || self.accentColor != null) {
            output.z(serialDesc, 4, o0.a, self.accentColor);
        }
        output.x(serialDesc, 5, self.isSpoiler);
        v1 v1Var = v1.a;
        output.z(serialDesc, 6, v1Var, self.spoilerDescription);
        if (output.I(serialDesc, 7) || self.themedBackgroundColor != null) {
            output.z(serialDesc, 7, o0.a, self.themedBackgroundColor);
        }
        if (!output.I(serialDesc, 8)) {
            String spoilerOrNull = self.getSpoilerOrNull();
            String str = self.spoilerDescription;
            if (str == null || StringsKt.K(str)) {
                str = null;
            }
        }
        output.z(serialDesc, 8, v1Var, self.getSpoilerOrNull());
        if (!output.I(serialDesc, 9) && self.getObscureOrNull() == null) {
            return;
        }
        output.z(serialDesc, 9, c1.a, self.getObscureOrNull());
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

    /* renamed from: component5, reason: from getter */
    public final Integer getAccentColor() {
        return this.accentColor;
    }

    /* renamed from: component6, reason: from getter */
    public final boolean getIsSpoiler() {
        return this.isSpoiler;
    }

    /* renamed from: component7, reason: from getter */
    public final String getSpoilerDescription() {
        return this.spoilerDescription;
    }

    /* renamed from: component8, reason: from getter */
    public final Integer getThemedBackgroundColor() {
        return this.themedBackgroundColor;
    }

    @NotNull
    public final ContainerComponent copy(int type, @NotNull String id2, String errorText, @NotNull List<? extends Component> components, Integer accentColor, boolean isSpoiler, String spoilerDescription, Integer themedBackgroundColor) {
        Intrinsics.checkNotNullParameter(id2, "id");
        Intrinsics.checkNotNullParameter(components, "components");
        return new ContainerComponent(type, id2, errorText, components, accentColor, isSpoiler, spoilerDescription, themedBackgroundColor);
    }

    public boolean equals(Object other) {
        if (this == other) {
            return true;
        }
        if (!(other instanceof ContainerComponent)) {
            return false;
        }
        ContainerComponent containerComponent = (ContainerComponent) other;
        return this.type == containerComponent.type && Intrinsics.areEqual(this.id, containerComponent.id) && Intrinsics.areEqual(this.errorText, containerComponent.errorText) && Intrinsics.areEqual(this.components, containerComponent.components) && Intrinsics.areEqual(this.accentColor, containerComponent.accentColor) && this.isSpoiler == containerComponent.isSpoiler && Intrinsics.areEqual(this.spoilerDescription, containerComponent.spoilerDescription) && Intrinsics.areEqual(this.themedBackgroundColor, containerComponent.themedBackgroundColor);
    }

    public final Integer getAccentColor() {
        return this.accentColor;
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

    @Override // com.discord.chat.bridge.spoiler.SpoilerableData
    public /* bridge */ /* synthetic */ String getObscureOrNull() {
        return (String) getObscureOrNull();
    }

    public final String getSpoilerDescription() {
        return this.spoilerDescription;
    }

    @Override // com.discord.chat.bridge.spoiler.SpoilerableData
    public String getSpoilerOrNull() {
        return this.spoilerOrNull;
    }

    public final Integer getThemedBackgroundColor() {
        return this.themedBackgroundColor;
    }

    @Override // com.discord.chat.bridge.botuikit.Component
    public int getType() {
        return this.type;
    }

    public int hashCode() {
        int d6 = a3.e.d(Integer.hashCode(this.type) * 31, 31, this.id);
        String str = this.errorText;
        int e9 = a3.e.e(this.components, (d6 + (str == null ? 0 : str.hashCode())) * 31, 31);
        Integer num = this.accentColor;
        int d7 = k0.d.d((e9 + (num == null ? 0 : num.hashCode())) * 31, 31, this.isSpoiler);
        String str2 = this.spoilerDescription;
        int hashCode = (d7 + (str2 == null ? 0 : str2.hashCode())) * 31;
        Integer num2 = this.themedBackgroundColor;
        return hashCode + (num2 != null ? num2.hashCode() : 0);
    }

    public final boolean isSpoiler() {
        return this.isSpoiler;
    }

    @NotNull
    public String toString() {
        int i5 = this.type;
        String str = this.id;
        String str2 = this.errorText;
        List<Component> list = this.components;
        Integer num = this.accentColor;
        boolean z5 = this.isSpoiler;
        String str3 = this.spoilerDescription;
        Integer num2 = this.themedBackgroundColor;
        StringBuilder n6 = a.n("ContainerComponent(type=", ", id=", str, i5, ", errorText=");
        n6.append(str2);
        n6.append(", components=");
        n6.append(list);
        n6.append(", accentColor=");
        n6.append(num);
        n6.append(", isSpoiler=");
        n6.append(z5);
        n6.append(", spoilerDescription=");
        n6.append(str3);
        n6.append(", themedBackgroundColor=");
        n6.append(num2);
        n6.append(")");
        return n6.toString();
    }

    public Void getObscureOrNull() {
        return this.obscureOrNull;
    }

    public /* synthetic */ ContainerComponent(int i5, String str, String str2, List list, Integer num, boolean z5, String str3, Integer num2, int i6, DefaultConstructorMarker defaultConstructorMarker) {
        this(i5, str, (i6 & 4) != 0 ? null : str2, list, (i6 & 16) != 0 ? null : num, z5, str3, (i6 & IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT) != 0 ? null : num2);
    }

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    /* JADX WARN: Multi-variable type inference failed */
    public ContainerComponent(int i5, @NotNull String id2, String str, @NotNull List<? extends Component> components, Integer num, boolean z5, String str2, Integer num2) {
        super(null);
        Intrinsics.checkNotNullParameter(id2, "id");
        Intrinsics.checkNotNullParameter(components, "components");
        this.type = i5;
        this.id = id2;
        this.errorText = str;
        this.components = components;
        this.accentColor = num;
        this.isSpoiler = z5;
        this.spoilerDescription = str2;
        this.themedBackgroundColor = num2;
        this.spoilerOrNull = str2 == null || StringsKt.K(str2) ? null : str2;
    }
}
