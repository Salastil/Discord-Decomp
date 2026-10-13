package com.discord.chat.bridge.botuikit;

import bs.g;
import bs.h0;
import bs.h1;
import bs.j1;
import bs.o0;
import bs.v1;
import com.discord.chat.bridge.botuikit.ActionComponentState;
import com.facebook.react.devsupport.StackTraceHelper;
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
@Metadata(d1 = {"\u0000:\n\u0000\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0010\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0010\u0011\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0005\bÇ\u0002\u0018\u00002\b\u0012\u0004\u0012\u00020\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0003\u0010\u0004J\u001d\u0010\t\u001a\u00020\b2\u0006\u0010\u0006\u001a\u00020\u00052\u0006\u0010\u0007\u001a\u00020\u0002¢\u0006\u0004\b\t\u0010\nJ\u0015\u0010\r\u001a\u00020\u00022\u0006\u0010\f\u001a\u00020\u000b¢\u0006\u0004\b\r\u0010\u000eJ\u0017\u0010\u0011\u001a\f\u0012\b\u0012\u0006\u0012\u0002\b\u00030\u00100\u000f¢\u0006\u0004\b\u0011\u0010\u0012R\u0017\u0010\u0014\u001a\u00020\u00138\u0006¢\u0006\f\n\u0004\b\u0014\u0010\u0015\u001a\u0004\b\u0016\u0010\u0017¨\u0006\u0018"}, d2 = {"com/discord/chat/bridge/botuikit/UserSelectComponent.$serializer", "Lbs/h0;", "Lcom/discord/chat/bridge/botuikit/UserSelectComponent;", "<init>", "()V", "Lkotlinx/serialization/encoding/Encoder;", "encoder", "value", "", "serialize", "(Lkotlinx/serialization/encoding/Encoder;Lcom/discord/chat/bridge/botuikit/UserSelectComponent;)V", "Lkotlinx/serialization/encoding/Decoder;", "decoder", "deserialize", "(Lkotlinx/serialization/encoding/Decoder;)Lcom/discord/chat/bridge/botuikit/UserSelectComponent;", "", "Lkotlinx/serialization/KSerializer;", "childSerializers", "()[Lkotlinx/serialization/KSerializer;", "Lkotlinx/serialization/descriptors/SerialDescriptor;", "descriptor", "Lkotlinx/serialization/descriptors/SerialDescriptor;", "getDescriptor", "()Lkotlinx/serialization/descriptors/SerialDescriptor;", "chat_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
/* loaded from: classes.dex */
public /* synthetic */ class UserSelectComponent$$serializer implements h0 {

    @NotNull
    public static final UserSelectComponent$$serializer INSTANCE;

    @NotNull
    private static final SerialDescriptor descriptor;

    static {
        UserSelectComponent$$serializer userSelectComponent$$serializer = new UserSelectComponent$$serializer();
        INSTANCE = userSelectComponent$$serializer;
        j1 j1Var = new j1("5", userSelectComponent$$serializer, 10);
        j1Var.k("type", false);
        j1Var.k(StackTraceHelper.ID_KEY, false);
        j1Var.k("state", false);
        j1Var.k("customId", false);
        j1Var.k("placeholder", true);
        j1Var.k(ViewProps.ACCESSIBILITY_LABEL, true);
        j1Var.k("minValues", false);
        j1Var.k("maxValues", false);
        j1Var.k("disabled", true);
        j1Var.k("selectedOptions", false);
        descriptor = j1Var;
    }

    private UserSelectComponent$$serializer() {
    }

    /* JADX WARN: Multi-variable type inference failed */
    @Override // bs.h0
    @NotNull
    public final KSerializer[] childSerializers() {
        Lazy[] lazyArr;
        lazyArr = UserSelectComponent.$childSerializers;
        o0 o0Var = o0.a;
        v1 v1Var = v1.a;
        return new KSerializer[]{o0Var, v1Var, ActionComponentState.Serializer.INSTANCE, v1Var, e.o(v1Var), e.o(v1Var), o0Var, o0Var, g.a, lazyArr[9].getValue()};
    }

    @Override // kotlinx.serialization.DeserializationStrategy
    @NotNull
    public final UserSelectComponent deserialize(@NotNull Decoder decoder) {
        Lazy[] lazyArr;
        int i5;
        String str;
        List list;
        String str2;
        ActionComponentState actionComponentState;
        int i6;
        int i10;
        int i11;
        boolean z5;
        String str3;
        String str4;
        Intrinsics.checkNotNullParameter(decoder, "decoder");
        SerialDescriptor serialDescriptor = descriptor;
        CompositeDecoder beginStructure = decoder.beginStructure(serialDescriptor);
        lazyArr = UserSelectComponent.$childSerializers;
        int i12 = 7;
        int i13 = 6;
        int i14 = 0;
        if (beginStructure.decodeSequentially()) {
            i5 = beginStructure.decodeIntElement(serialDescriptor, 0);
            String decodeStringElement = beginStructure.decodeStringElement(serialDescriptor, 1);
            ActionComponentState actionComponentState2 = (ActionComponentState) beginStructure.decodeSerializableElement(serialDescriptor, 2, ActionComponentState.Serializer.INSTANCE, null);
            String decodeStringElement2 = beginStructure.decodeStringElement(serialDescriptor, 3);
            v1 v1Var = v1.a;
            String str5 = (String) beginStructure.decodeNullableSerializableElement(serialDescriptor, 4, v1Var, null);
            String str6 = (String) beginStructure.decodeNullableSerializableElement(serialDescriptor, 5, v1Var, null);
            int decodeIntElement = beginStructure.decodeIntElement(serialDescriptor, 6);
            int decodeIntElement2 = beginStructure.decodeIntElement(serialDescriptor, 7);
            boolean decodeBooleanElement = beginStructure.decodeBooleanElement(serialDescriptor, 8);
            list = (List) beginStructure.decodeSerializableElement(serialDescriptor, 9, (DeserializationStrategy) lazyArr[9].getValue(), null);
            i10 = decodeIntElement2;
            i11 = decodeIntElement;
            str = str6;
            str4 = decodeStringElement2;
            z5 = decodeBooleanElement;
            str2 = str5;
            actionComponentState = actionComponentState2;
            i6 = 1023;
            str3 = decodeStringElement;
        } else {
            boolean z6 = true;
            i5 = 0;
            int i15 = 0;
            boolean z7 = false;
            String str7 = null;
            List list2 = null;
            String str8 = null;
            ActionComponentState actionComponentState3 = null;
            String str9 = null;
            String str10 = null;
            int i16 = 0;
            while (z6) {
                int decodeElementIndex = beginStructure.decodeElementIndex(serialDescriptor);
                switch (decodeElementIndex) {
                    case -1:
                        z6 = false;
                        i12 = 7;
                    case 0:
                        i14 |= 1;
                        i5 = beginStructure.decodeIntElement(serialDescriptor, 0);
                        i12 = 7;
                        i13 = 6;
                    case 1:
                        str9 = beginStructure.decodeStringElement(serialDescriptor, 1);
                        i14 |= 2;
                        i12 = 7;
                        i13 = 6;
                    case 2:
                        actionComponentState3 = (ActionComponentState) beginStructure.decodeSerializableElement(serialDescriptor, 2, ActionComponentState.Serializer.INSTANCE, actionComponentState3);
                        i14 |= 4;
                        i12 = 7;
                        i13 = 6;
                    case 3:
                        str10 = beginStructure.decodeStringElement(serialDescriptor, 3);
                        i14 |= 8;
                        i12 = 7;
                    case 4:
                        str8 = (String) beginStructure.decodeNullableSerializableElement(serialDescriptor, 4, v1.a, str8);
                        i14 |= 16;
                        i12 = 7;
                    case 5:
                        str7 = (String) beginStructure.decodeNullableSerializableElement(serialDescriptor, 5, v1.a, str7);
                        i14 |= 32;
                        i12 = 7;
                    case 6:
                        i15 = beginStructure.decodeIntElement(serialDescriptor, i13);
                        i14 |= 64;
                    case 7:
                        i16 = beginStructure.decodeIntElement(serialDescriptor, i12);
                        i14 |= IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
                    case 8:
                        z7 = beginStructure.decodeBooleanElement(serialDescriptor, 8);
                        i14 |= IntBufferBatchMountItem.INSTRUCTION_UPDATE_EVENT_EMITTER;
                    case 9:
                        list2 = (List) beginStructure.decodeSerializableElement(serialDescriptor, 9, (DeserializationStrategy) lazyArr[9].getValue(), list2);
                        i14 |= IntBufferBatchMountItem.INSTRUCTION_UPDATE_PADDING;
                    default:
                        throw new r(decodeElementIndex);
                }
            }
            str = str7;
            list = list2;
            str2 = str8;
            actionComponentState = actionComponentState3;
            i6 = i14;
            i10 = i16;
            i11 = i15;
            z5 = z7;
            str3 = str9;
            str4 = str10;
        }
        int i17 = i5;
        beginStructure.endStructure(serialDescriptor);
        return new UserSelectComponent(i6, i17, str3, actionComponentState, str4, str2, str, i11, i10, z5, list, (SerializationConstructorMarker) null);
    }

    @Override // kotlinx.serialization.DeserializationStrategy
    @NotNull
    public final SerialDescriptor getDescriptor() {
        return descriptor;
    }

    @Override // kotlinx.serialization.KSerializer
    public final void serialize(@NotNull Encoder encoder, @NotNull UserSelectComponent value) {
        Intrinsics.checkNotNullParameter(encoder, "encoder");
        Intrinsics.checkNotNullParameter(value, "value");
        SerialDescriptor serialDescriptor = descriptor;
        CompositeEncoder beginStructure = encoder.beginStructure(serialDescriptor);
        UserSelectComponent.write$Self$chat_release(value, beginStructure, serialDescriptor);
        beginStructure.endStructure(serialDescriptor);
    }

    @Override // bs.h0
    @NotNull
    public KSerializer[] typeParametersSerializers() {
        return h1.f3190b;
    }
}
