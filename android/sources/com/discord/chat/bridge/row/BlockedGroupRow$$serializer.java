package com.discord.chat.bridge.row;

import bs.g;
import bs.h0;
import bs.h1;
import bs.j1;
import bs.o0;
import bs.v1;
import com.discord.chat.bridge.ChangeType;
import com.facebook.react.fabric.mounting.mountitems.IntBufferBatchMountItem;
import com.facebook.react.uimanager.ViewProps;
import ds.r;
import fo.d;
import java.util.List;
import kotlin.Lazy;
import kotlin.Metadata;
import kotlin.jvm.internal.Intrinsics;
import kotlinx.serialization.DeserializationStrategy;
import kotlinx.serialization.KSerializer;
import kotlinx.serialization.descriptors.SerialDescriptor;
import kotlinx.serialization.encoding.CompositeDecoder;
import kotlinx.serialization.encoding.CompositeEncoder;
import kotlinx.serialization.encoding.Decoder;
import kotlinx.serialization.encoding.Encoder;
import kotlinx.serialization.internal.SerializationConstructorMarker;
import nf.e;
import org.jetbrains.annotations.NotNull;

@d
@Metadata(d1 = {"\u0000:\n\u0000\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0010\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0010\u0011\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0005\bÇ\u0002\u0018\u00002\b\u0012\u0004\u0012\u00020\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0003\u0010\u0004J\u001d\u0010\t\u001a\u00020\b2\u0006\u0010\u0006\u001a\u00020\u00052\u0006\u0010\u0007\u001a\u00020\u0002¢\u0006\u0004\b\t\u0010\nJ\u0015\u0010\r\u001a\u00020\u00022\u0006\u0010\f\u001a\u00020\u000b¢\u0006\u0004\b\r\u0010\u000eJ\u0017\u0010\u0011\u001a\f\u0012\b\u0012\u0006\u0012\u0002\b\u00030\u00100\u000f¢\u0006\u0004\b\u0011\u0010\u0012R\u0017\u0010\u0014\u001a\u00020\u00138\u0006¢\u0006\f\n\u0004\b\u0014\u0010\u0015\u001a\u0004\b\u0016\u0010\u0017¨\u0006\u0018"}, d2 = {"com/discord/chat/bridge/row/BlockedGroupRow.$serializer", "Lbs/h0;", "Lcom/discord/chat/bridge/row/BlockedGroupRow;", "<init>", "()V", "Lkotlinx/serialization/encoding/Encoder;", "encoder", "value", "", "serialize", "(Lkotlinx/serialization/encoding/Encoder;Lcom/discord/chat/bridge/row/BlockedGroupRow;)V", "Lkotlinx/serialization/encoding/Decoder;", "decoder", "deserialize", "(Lkotlinx/serialization/encoding/Decoder;)Lcom/discord/chat/bridge/row/BlockedGroupRow;", "", "Lkotlinx/serialization/KSerializer;", "childSerializers", "()[Lkotlinx/serialization/KSerializer;", "Lkotlinx/serialization/descriptors/SerialDescriptor;", "descriptor", "Lkotlinx/serialization/descriptors/SerialDescriptor;", "getDescriptor", "()Lkotlinx/serialization/descriptors/SerialDescriptor;", "chat_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
/* loaded from: classes.dex */
public /* synthetic */ class BlockedGroupRow$$serializer implements h0 {

    @NotNull
    public static final BlockedGroupRow$$serializer INSTANCE;

    @NotNull
    private static final SerialDescriptor descriptor;

    static {
        BlockedGroupRow$$serializer blockedGroupRow$$serializer = new BlockedGroupRow$$serializer();
        INSTANCE = blockedGroupRow$$serializer;
        j1 j1Var = new j1("2", blockedGroupRow$$serializer, 10);
        j1Var.k("index", false);
        j1Var.k("changeType", false);
        j1Var.k(ViewProps.COLOR, false);
        j1Var.k(ViewProps.BORDER_COLOR, false);
        j1Var.k(ViewProps.BACKGROUND_COLOR, false);
        j1Var.k("text", false);
        j1Var.k("revealed", false);
        j1Var.k("button", false);
        j1Var.k("content", true);
        j1Var.k("canUncollapse", true);
        descriptor = j1Var;
    }

    private BlockedGroupRow$$serializer() {
    }

    @Override // bs.h0
    @NotNull
    public final KSerializer[] childSerializers() {
        Lazy[] lazyArr;
        lazyArr = BlockedGroupRow.$childSerializers;
        g gVar = g.a;
        KSerializer o6 = e.o((KSerializer) lazyArr[8].getValue());
        KSerializer o7 = e.o(gVar);
        o0 o0Var = o0.a;
        return new KSerializer[]{o0Var, ChangeType.Serializer.INSTANCE, o0Var, o0Var, o0Var, v1.a, gVar, BlockedGroupButton$$serializer.INSTANCE, o6, o7};
    }

    @Override // kotlinx.serialization.DeserializationStrategy
    @NotNull
    public final BlockedGroupRow deserialize(@NotNull Decoder decoder) {
        Lazy[] lazyArr;
        int i5;
        ChangeType changeType;
        Boolean bool;
        List list;
        BlockedGroupButton blockedGroupButton;
        int i6;
        boolean z5;
        int i10;
        int i11;
        int i12;
        String str;
        Intrinsics.checkNotNullParameter(decoder, "decoder");
        SerialDescriptor serialDescriptor = descriptor;
        CompositeDecoder beginStructure = decoder.beginStructure(serialDescriptor);
        lazyArr = BlockedGroupRow.$childSerializers;
        int i13 = 9;
        int i14 = 7;
        int i15 = 6;
        int i16 = 0;
        if (beginStructure.decodeSequentially()) {
            i5 = beginStructure.decodeIntElement(serialDescriptor, 0);
            ChangeType changeType2 = (ChangeType) beginStructure.decodeSerializableElement(serialDescriptor, 1, ChangeType.Serializer.INSTANCE, null);
            int decodeIntElement = beginStructure.decodeIntElement(serialDescriptor, 2);
            int decodeIntElement2 = beginStructure.decodeIntElement(serialDescriptor, 3);
            int decodeIntElement3 = beginStructure.decodeIntElement(serialDescriptor, 4);
            String decodeStringElement = beginStructure.decodeStringElement(serialDescriptor, 5);
            boolean decodeBooleanElement = beginStructure.decodeBooleanElement(serialDescriptor, 6);
            BlockedGroupButton blockedGroupButton2 = (BlockedGroupButton) beginStructure.decodeSerializableElement(serialDescriptor, 7, BlockedGroupButton$$serializer.INSTANCE, null);
            list = (List) beginStructure.decodeNullableSerializableElement(serialDescriptor, 8, (DeserializationStrategy) lazyArr[8].getValue(), null);
            bool = (Boolean) beginStructure.decodeNullableSerializableElement(serialDescriptor, 9, g.a, null);
            blockedGroupButton = blockedGroupButton2;
            z5 = decodeBooleanElement;
            str = decodeStringElement;
            i10 = decodeIntElement2;
            i11 = decodeIntElement3;
            i12 = decodeIntElement;
            i6 = 1023;
            changeType = changeType2;
        } else {
            boolean z6 = true;
            i5 = 0;
            int i17 = 0;
            int i18 = 0;
            int i19 = 0;
            Boolean bool2 = null;
            List list2 = null;
            BlockedGroupButton blockedGroupButton3 = null;
            ChangeType changeType3 = null;
            String str2 = null;
            boolean z7 = false;
            while (z6) {
                int decodeElementIndex = beginStructure.decodeElementIndex(serialDescriptor);
                switch (decodeElementIndex) {
                    case -1:
                        z6 = false;
                        i13 = 9;
                        i14 = 7;
                    case 0:
                        i5 = beginStructure.decodeIntElement(serialDescriptor, 0);
                        i16 |= 1;
                        i13 = 9;
                        i14 = 7;
                        i15 = 6;
                    case 1:
                        i16 |= 2;
                        changeType3 = (ChangeType) beginStructure.decodeSerializableElement(serialDescriptor, 1, ChangeType.Serializer.INSTANCE, changeType3);
                        i13 = 9;
                        i14 = 7;
                        i15 = 6;
                    case 2:
                        i19 = beginStructure.decodeIntElement(serialDescriptor, 2);
                        i16 |= 4;
                        i13 = 9;
                    case 3:
                        i16 |= 8;
                        i17 = beginStructure.decodeIntElement(serialDescriptor, 3);
                    case 4:
                        i18 = beginStructure.decodeIntElement(serialDescriptor, 4);
                        i16 |= 16;
                    case 5:
                        str2 = beginStructure.decodeStringElement(serialDescriptor, 5);
                        i16 |= 32;
                    case 6:
                        z7 = beginStructure.decodeBooleanElement(serialDescriptor, i15);
                        i16 |= 64;
                    case 7:
                        blockedGroupButton3 = (BlockedGroupButton) beginStructure.decodeSerializableElement(serialDescriptor, i14, BlockedGroupButton$$serializer.INSTANCE, blockedGroupButton3);
                        i16 |= IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
                    case 8:
                        list2 = (List) beginStructure.decodeNullableSerializableElement(serialDescriptor, 8, (DeserializationStrategy) lazyArr[8].getValue(), list2);
                        i16 |= IntBufferBatchMountItem.INSTRUCTION_UPDATE_EVENT_EMITTER;
                    case 9:
                        bool2 = (Boolean) beginStructure.decodeNullableSerializableElement(serialDescriptor, i13, g.a, bool2);
                        i16 |= IntBufferBatchMountItem.INSTRUCTION_UPDATE_PADDING;
                    default:
                        throw new r(decodeElementIndex);
                }
            }
            changeType = changeType3;
            bool = bool2;
            list = list2;
            blockedGroupButton = blockedGroupButton3;
            i6 = i16;
            z5 = z7;
            i10 = i17;
            i11 = i18;
            i12 = i19;
            str = str2;
        }
        int i20 = i5;
        beginStructure.endStructure(serialDescriptor);
        return new BlockedGroupRow(i6, i20, changeType, i12, i10, i11, str, z5, blockedGroupButton, list, bool, (SerializationConstructorMarker) null);
    }

    @Override // kotlinx.serialization.DeserializationStrategy
    @NotNull
    public final SerialDescriptor getDescriptor() {
        return descriptor;
    }

    @Override // kotlinx.serialization.KSerializer
    public final void serialize(@NotNull Encoder encoder, @NotNull BlockedGroupRow value) {
        Intrinsics.checkNotNullParameter(encoder, "encoder");
        Intrinsics.checkNotNullParameter(value, "value");
        SerialDescriptor serialDescriptor = descriptor;
        CompositeEncoder beginStructure = encoder.beginStructure(serialDescriptor);
        BlockedGroupRow.write$Self$chat_release(value, beginStructure, serialDescriptor);
        beginStructure.endStructure(serialDescriptor);
    }

    @Override // bs.h0
    @NotNull
    public KSerializer[] typeParametersSerializers() {
        return h1.f3190b;
    }
}
