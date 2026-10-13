package com.discord.chat.bridge.row;

import bs.g;
import bs.h0;
import bs.h1;
import bs.j1;
import bs.o0;
import bs.v1;
import com.discord.chat.bridge.ChangeType;
import com.discord.chat.bridge.summaries.Summary;
import com.discord.chat.bridge.summaries.Summary$$serializer;
import com.facebook.react.devsupport.StackTraceHelper;
import com.facebook.react.fabric.mounting.mountitems.IntBufferBatchMountItem;
import com.facebook.react.uimanager.ViewProps;
import ds.r;
import fo.d;
import kotlin.Metadata;
import kotlin.jvm.internal.Intrinsics;
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
@Metadata(d1 = {"\u0000:\n\u0000\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0010\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0010\u0011\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0005\bÇ\u0002\u0018\u00002\b\u0012\u0004\u0012\u00020\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0003\u0010\u0004J\u001d\u0010\t\u001a\u00020\b2\u0006\u0010\u0006\u001a\u00020\u00052\u0006\u0010\u0007\u001a\u00020\u0002¢\u0006\u0004\b\t\u0010\nJ\u0015\u0010\r\u001a\u00020\u00022\u0006\u0010\f\u001a\u00020\u000b¢\u0006\u0004\b\r\u0010\u000eJ\u0017\u0010\u0011\u001a\f\u0012\b\u0012\u0006\u0012\u0002\b\u00030\u00100\u000f¢\u0006\u0004\b\u0011\u0010\u0012R\u0017\u0010\u0014\u001a\u00020\u00138\u0006¢\u0006\f\n\u0004\b\u0014\u0010\u0015\u001a\u0004\b\u0016\u0010\u0017¨\u0006\u0018"}, d2 = {"com/discord/chat/bridge/row/SeparatorRow.$serializer", "Lbs/h0;", "Lcom/discord/chat/bridge/row/SeparatorRow;", "<init>", "()V", "Lkotlinx/serialization/encoding/Encoder;", "encoder", "value", "", "serialize", "(Lkotlinx/serialization/encoding/Encoder;Lcom/discord/chat/bridge/row/SeparatorRow;)V", "Lkotlinx/serialization/encoding/Decoder;", "decoder", "deserialize", "(Lkotlinx/serialization/encoding/Decoder;)Lcom/discord/chat/bridge/row/SeparatorRow;", "", "Lkotlinx/serialization/KSerializer;", "childSerializers", "()[Lkotlinx/serialization/KSerializer;", "Lkotlinx/serialization/descriptors/SerialDescriptor;", "descriptor", "Lkotlinx/serialization/descriptors/SerialDescriptor;", "getDescriptor", "()Lkotlinx/serialization/descriptors/SerialDescriptor;", "chat_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
/* loaded from: classes.dex */
public /* synthetic */ class SeparatorRow$$serializer implements h0 {

    @NotNull
    public static final SeparatorRow$$serializer INSTANCE;

    @NotNull
    private static final SerialDescriptor descriptor;

    static {
        SeparatorRow$$serializer separatorRow$$serializer = new SeparatorRow$$serializer();
        INSTANCE = separatorRow$$serializer;
        j1 j1Var = new j1("0", separatorRow$$serializer, 9);
        j1Var.k("changeType", false);
        j1Var.k("index", false);
        j1Var.k("text", false);
        j1Var.k(StackTraceHelper.ID_KEY, false);
        j1Var.k(ViewProps.COLOR, false);
        j1Var.k(ViewProps.BORDER_COLOR, true);
        j1Var.k("scrollTo", true);
        j1Var.k("isBeforeContent", true);
        j1Var.k("summary", true);
        descriptor = j1Var;
    }

    private SeparatorRow$$serializer() {
    }

    @Override // bs.h0
    @NotNull
    public final KSerializer[] childSerializers() {
        o0 o0Var = o0.a;
        KSerializer o6 = e.o(o0Var);
        g gVar = g.a;
        KSerializer o7 = e.o(gVar);
        KSerializer o10 = e.o(gVar);
        KSerializer o11 = e.o(Summary$$serializer.INSTANCE);
        v1 v1Var = v1.a;
        return new KSerializer[]{ChangeType.Serializer.INSTANCE, o0Var, v1Var, v1Var, o0Var, o6, o7, o10, o11};
    }

    @Override // kotlinx.serialization.DeserializationStrategy
    @NotNull
    public final SeparatorRow deserialize(@NotNull Decoder decoder) {
        int i5;
        Summary summary;
        Boolean bool;
        Boolean bool2;
        Integer num;
        int i6;
        int i10;
        ChangeType changeType;
        String str;
        String str2;
        Intrinsics.checkNotNullParameter(decoder, "decoder");
        SerialDescriptor serialDescriptor = descriptor;
        CompositeDecoder beginStructure = decoder.beginStructure(serialDescriptor);
        int i11 = 7;
        int i12 = 6;
        if (beginStructure.decodeSequentially()) {
            ChangeType changeType2 = (ChangeType) beginStructure.decodeSerializableElement(serialDescriptor, 0, ChangeType.Serializer.INSTANCE, null);
            int decodeIntElement = beginStructure.decodeIntElement(serialDescriptor, 1);
            String decodeStringElement = beginStructure.decodeStringElement(serialDescriptor, 2);
            String decodeStringElement2 = beginStructure.decodeStringElement(serialDescriptor, 3);
            int decodeIntElement2 = beginStructure.decodeIntElement(serialDescriptor, 4);
            Integer num2 = (Integer) beginStructure.decodeNullableSerializableElement(serialDescriptor, 5, o0.a, null);
            g gVar = g.a;
            Boolean bool3 = (Boolean) beginStructure.decodeNullableSerializableElement(serialDescriptor, 6, gVar, null);
            changeType = changeType2;
            bool = (Boolean) beginStructure.decodeNullableSerializableElement(serialDescriptor, 7, gVar, null);
            bool2 = bool3;
            num = num2;
            str2 = decodeStringElement2;
            summary = (Summary) beginStructure.decodeNullableSerializableElement(serialDescriptor, 8, Summary$$serializer.INSTANCE, null);
            i5 = decodeIntElement2;
            str = decodeStringElement;
            i6 = decodeIntElement;
            i10 = 511;
        } else {
            boolean z5 = true;
            int i13 = 0;
            int i14 = 0;
            Summary summary2 = null;
            Boolean bool4 = null;
            Boolean bool5 = null;
            ChangeType changeType3 = null;
            String str3 = null;
            String str4 = null;
            int i15 = 0;
            Integer num3 = null;
            while (z5) {
                int decodeElementIndex = beginStructure.decodeElementIndex(serialDescriptor);
                switch (decodeElementIndex) {
                    case -1:
                        z5 = false;
                        i12 = 6;
                    case 0:
                        changeType3 = (ChangeType) beginStructure.decodeSerializableElement(serialDescriptor, 0, ChangeType.Serializer.INSTANCE, changeType3);
                        i14 |= 1;
                        i11 = 7;
                        i12 = 6;
                    case 1:
                        i14 |= 2;
                        i15 = beginStructure.decodeIntElement(serialDescriptor, 1);
                        i11 = 7;
                    case 2:
                        i14 |= 4;
                        str3 = beginStructure.decodeStringElement(serialDescriptor, 2);
                        i11 = 7;
                    case 3:
                        str4 = beginStructure.decodeStringElement(serialDescriptor, 3);
                        i14 |= 8;
                        i11 = 7;
                    case 4:
                        i13 = beginStructure.decodeIntElement(serialDescriptor, 4);
                        i14 |= 16;
                    case 5:
                        num3 = (Integer) beginStructure.decodeNullableSerializableElement(serialDescriptor, 5, o0.a, num3);
                        i14 |= 32;
                    case 6:
                        bool5 = (Boolean) beginStructure.decodeNullableSerializableElement(serialDescriptor, i12, g.a, bool5);
                        i14 |= 64;
                    case 7:
                        bool4 = (Boolean) beginStructure.decodeNullableSerializableElement(serialDescriptor, i11, g.a, bool4);
                        i14 |= IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
                    case 8:
                        summary2 = (Summary) beginStructure.decodeNullableSerializableElement(serialDescriptor, 8, Summary$$serializer.INSTANCE, summary2);
                        i14 |= IntBufferBatchMountItem.INSTRUCTION_UPDATE_EVENT_EMITTER;
                    default:
                        throw new r(decodeElementIndex);
                }
            }
            i5 = i13;
            summary = summary2;
            bool = bool4;
            bool2 = bool5;
            num = num3;
            i6 = i15;
            i10 = i14;
            changeType = changeType3;
            str = str3;
            str2 = str4;
        }
        beginStructure.endStructure(serialDescriptor);
        return new SeparatorRow(i10, changeType, i6, str, str2, i5, num, bool2, bool, summary, (SerializationConstructorMarker) null);
    }

    @Override // kotlinx.serialization.DeserializationStrategy
    @NotNull
    public final SerialDescriptor getDescriptor() {
        return descriptor;
    }

    @Override // kotlinx.serialization.KSerializer
    public final void serialize(@NotNull Encoder encoder, @NotNull SeparatorRow value) {
        Intrinsics.checkNotNullParameter(encoder, "encoder");
        Intrinsics.checkNotNullParameter(value, "value");
        SerialDescriptor serialDescriptor = descriptor;
        CompositeEncoder beginStructure = encoder.beginStructure(serialDescriptor);
        SeparatorRow.write$Self$chat_release(value, beginStructure, serialDescriptor);
        beginStructure.endStructure(serialDescriptor);
    }

    @Override // bs.h0
    @NotNull
    public KSerializer[] typeParametersSerializers() {
        return h1.f3190b;
    }
}
