package com.discord.chat.bridge.botuikit;

import bs.g;
import bs.h0;
import bs.h1;
import bs.j1;
import bs.o0;
import bs.v1;
import com.discord.chat.bridge.botuikit.ActionComponentState;
import com.discord.chat.bridge.botuikit.ButtonStyle;
import com.facebook.react.devsupport.StackTraceHelper;
import com.facebook.react.fabric.mounting.mountitems.IntBufferBatchMountItem;
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
@Metadata(d1 = {"\u0000:\n\u0000\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0010\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0010\u0011\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0005\bÇ\u0002\u0018\u00002\b\u0012\u0004\u0012\u00020\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0003\u0010\u0004J\u001d\u0010\t\u001a\u00020\b2\u0006\u0010\u0006\u001a\u00020\u00052\u0006\u0010\u0007\u001a\u00020\u0002¢\u0006\u0004\b\t\u0010\nJ\u0015\u0010\r\u001a\u00020\u00022\u0006\u0010\f\u001a\u00020\u000b¢\u0006\u0004\b\r\u0010\u000eJ\u0017\u0010\u0011\u001a\f\u0012\b\u0012\u0006\u0012\u0002\b\u00030\u00100\u000f¢\u0006\u0004\b\u0011\u0010\u0012R\u0017\u0010\u0014\u001a\u00020\u00138\u0006¢\u0006\f\n\u0004\b\u0014\u0010\u0015\u001a\u0004\b\u0016\u0010\u0017¨\u0006\u0018"}, d2 = {"com/discord/chat/bridge/botuikit/ButtonComponent.$serializer", "Lbs/h0;", "Lcom/discord/chat/bridge/botuikit/ButtonComponent;", "<init>", "()V", "Lkotlinx/serialization/encoding/Encoder;", "encoder", "value", "", "serialize", "(Lkotlinx/serialization/encoding/Encoder;Lcom/discord/chat/bridge/botuikit/ButtonComponent;)V", "Lkotlinx/serialization/encoding/Decoder;", "decoder", "deserialize", "(Lkotlinx/serialization/encoding/Decoder;)Lcom/discord/chat/bridge/botuikit/ButtonComponent;", "", "Lkotlinx/serialization/KSerializer;", "childSerializers", "()[Lkotlinx/serialization/KSerializer;", "Lkotlinx/serialization/descriptors/SerialDescriptor;", "descriptor", "Lkotlinx/serialization/descriptors/SerialDescriptor;", "getDescriptor", "()Lkotlinx/serialization/descriptors/SerialDescriptor;", "chat_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
/* loaded from: classes.dex */
public /* synthetic */ class ButtonComponent$$serializer implements h0 {

    @NotNull
    public static final ButtonComponent$$serializer INSTANCE;

    @NotNull
    private static final SerialDescriptor descriptor;

    static {
        ButtonComponent$$serializer buttonComponent$$serializer = new ButtonComponent$$serializer();
        INSTANCE = buttonComponent$$serializer;
        j1 j1Var = new j1("2", buttonComponent$$serializer, 10);
        j1Var.k("type", false);
        j1Var.k(StackTraceHelper.ID_KEY, false);
        j1Var.k("state", false);
        j1Var.k("customId", true);
        j1Var.k("label", true);
        j1Var.k("style", false);
        j1Var.k("disabled", true);
        j1Var.k("emoji", true);
        j1Var.k("url", true);
        j1Var.k("skuId", true);
        descriptor = j1Var;
    }

    private ButtonComponent$$serializer() {
    }

    @Override // bs.h0
    @NotNull
    public final KSerializer[] childSerializers() {
        v1 v1Var = v1.a;
        return new KSerializer[]{o0.a, v1Var, ActionComponentState.Serializer.INSTANCE, e.o(v1Var), e.o(v1Var), ButtonStyle.Serializer.INSTANCE, g.a, e.o(ComponentEmoji$$serializer.INSTANCE), e.o(v1Var), e.o(v1Var)};
    }

    @Override // kotlinx.serialization.DeserializationStrategy
    @NotNull
    public final ButtonComponent deserialize(@NotNull Decoder decoder) {
        int i5;
        String str;
        String str2;
        ButtonStyle buttonStyle;
        ComponentEmoji componentEmoji;
        String str3;
        String str4;
        ActionComponentState actionComponentState;
        boolean z5;
        int i6;
        String str5;
        char c6;
        Intrinsics.checkNotNullParameter(decoder, "decoder");
        SerialDescriptor serialDescriptor = descriptor;
        CompositeDecoder beginStructure = decoder.beginStructure(serialDescriptor);
        int i10 = 9;
        if (beginStructure.decodeSequentially()) {
            i5 = beginStructure.decodeIntElement(serialDescriptor, 0);
            String decodeStringElement = beginStructure.decodeStringElement(serialDescriptor, 1);
            ActionComponentState actionComponentState2 = (ActionComponentState) beginStructure.decodeSerializableElement(serialDescriptor, 2, ActionComponentState.Serializer.INSTANCE, null);
            v1 v1Var = v1.a;
            String str6 = (String) beginStructure.decodeNullableSerializableElement(serialDescriptor, 3, v1Var, null);
            String str7 = (String) beginStructure.decodeNullableSerializableElement(serialDescriptor, 4, v1Var, null);
            ButtonStyle buttonStyle2 = (ButtonStyle) beginStructure.decodeSerializableElement(serialDescriptor, 5, ButtonStyle.Serializer.INSTANCE, null);
            boolean decodeBooleanElement = beginStructure.decodeBooleanElement(serialDescriptor, 6);
            ComponentEmoji componentEmoji2 = (ComponentEmoji) beginStructure.decodeNullableSerializableElement(serialDescriptor, 7, ComponentEmoji$$serializer.INSTANCE, null);
            String str8 = (String) beginStructure.decodeNullableSerializableElement(serialDescriptor, 8, v1Var, null);
            str = (String) beginStructure.decodeNullableSerializableElement(serialDescriptor, 9, v1Var, null);
            componentEmoji = componentEmoji2;
            z5 = decodeBooleanElement;
            buttonStyle = buttonStyle2;
            str4 = str6;
            str2 = str8;
            str3 = str7;
            actionComponentState = actionComponentState2;
            str5 = decodeStringElement;
            i6 = 1023;
        } else {
            boolean z6 = true;
            i5 = 0;
            int i11 = 0;
            String str9 = null;
            String str10 = null;
            ButtonStyle buttonStyle3 = null;
            ComponentEmoji componentEmoji3 = null;
            String str11 = null;
            String str12 = null;
            String str13 = null;
            boolean z7 = false;
            ActionComponentState actionComponentState3 = null;
            while (z6) {
                int decodeElementIndex = beginStructure.decodeElementIndex(serialDescriptor);
                switch (decodeElementIndex) {
                    case -1:
                        z6 = false;
                        i10 = 9;
                    case 0:
                        i11 |= 1;
                        i5 = beginStructure.decodeIntElement(serialDescriptor, 0);
                        i10 = 9;
                    case 1:
                        str13 = beginStructure.decodeStringElement(serialDescriptor, 1);
                        i11 |= 2;
                        i10 = 9;
                    case 2:
                        actionComponentState3 = (ActionComponentState) beginStructure.decodeSerializableElement(serialDescriptor, 2, ActionComponentState.Serializer.INSTANCE, actionComponentState3);
                        i11 |= 4;
                        i10 = 9;
                    case 3:
                        str12 = (String) beginStructure.decodeNullableSerializableElement(serialDescriptor, 3, v1.a, str12);
                        i11 |= 8;
                        i10 = 9;
                    case 4:
                        str11 = (String) beginStructure.decodeNullableSerializableElement(serialDescriptor, 4, v1.a, str11);
                        i11 |= 16;
                        i10 = 9;
                    case 5:
                        buttonStyle3 = (ButtonStyle) beginStructure.decodeSerializableElement(serialDescriptor, 5, ButtonStyle.Serializer.INSTANCE, buttonStyle3);
                        i11 |= 32;
                        i10 = 9;
                    case 6:
                        c6 = 7;
                        z7 = beginStructure.decodeBooleanElement(serialDescriptor, 6);
                        i11 |= 64;
                        i10 = 9;
                    case 7:
                        c6 = 7;
                        componentEmoji3 = (ComponentEmoji) beginStructure.decodeNullableSerializableElement(serialDescriptor, 7, ComponentEmoji$$serializer.INSTANCE, componentEmoji3);
                        i11 |= IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
                        i10 = 9;
                    case 8:
                        str10 = (String) beginStructure.decodeNullableSerializableElement(serialDescriptor, 8, v1.a, str10);
                        i11 |= IntBufferBatchMountItem.INSTRUCTION_UPDATE_EVENT_EMITTER;
                    case 9:
                        str9 = (String) beginStructure.decodeNullableSerializableElement(serialDescriptor, i10, v1.a, str9);
                        i11 |= IntBufferBatchMountItem.INSTRUCTION_UPDATE_PADDING;
                    default:
                        throw new r(decodeElementIndex);
                }
            }
            str = str9;
            str2 = str10;
            buttonStyle = buttonStyle3;
            componentEmoji = componentEmoji3;
            str3 = str11;
            str4 = str12;
            actionComponentState = actionComponentState3;
            z5 = z7;
            i6 = i11;
            str5 = str13;
        }
        int i12 = i5;
        beginStructure.endStructure(serialDescriptor);
        return new ButtonComponent(i6, i12, str5, actionComponentState, str4, str3, buttonStyle, z5, componentEmoji, str2, str, (SerializationConstructorMarker) null);
    }

    @Override // kotlinx.serialization.DeserializationStrategy
    @NotNull
    public final SerialDescriptor getDescriptor() {
        return descriptor;
    }

    @Override // kotlinx.serialization.KSerializer
    public final void serialize(@NotNull Encoder encoder, @NotNull ButtonComponent value) {
        Intrinsics.checkNotNullParameter(encoder, "encoder");
        Intrinsics.checkNotNullParameter(value, "value");
        SerialDescriptor serialDescriptor = descriptor;
        CompositeEncoder beginStructure = encoder.beginStructure(serialDescriptor);
        ButtonComponent.write$Self$chat_release(value, beginStructure, serialDescriptor);
        beginStructure.endStructure(serialDescriptor);
    }

    @Override // bs.h0
    @NotNull
    public KSerializer[] typeParametersSerializers() {
        return h1.f3190b;
    }
}
