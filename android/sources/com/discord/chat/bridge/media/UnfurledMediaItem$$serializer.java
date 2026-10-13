package com.discord.chat.bridge.media;

import bs.g;
import bs.h0;
import bs.h1;
import bs.j1;
import bs.o0;
import bs.v1;
import com.discord.chat.bridge.media.UnfurledMediaLoadingState;
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
@Metadata(d1 = {"\u0000:\n\u0000\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0010\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0010\u0011\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0005\bÇ\u0002\u0018\u00002\b\u0012\u0004\u0012\u00020\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0003\u0010\u0004J\u001d\u0010\t\u001a\u00020\b2\u0006\u0010\u0006\u001a\u00020\u00052\u0006\u0010\u0007\u001a\u00020\u0002¢\u0006\u0004\b\t\u0010\nJ\u0015\u0010\r\u001a\u00020\u00022\u0006\u0010\f\u001a\u00020\u000b¢\u0006\u0004\b\r\u0010\u000eJ\u0017\u0010\u0011\u001a\f\u0012\b\u0012\u0006\u0012\u0002\b\u00030\u00100\u000f¢\u0006\u0004\b\u0011\u0010\u0012R\u0017\u0010\u0014\u001a\u00020\u00138\u0006¢\u0006\f\n\u0004\b\u0014\u0010\u0015\u001a\u0004\b\u0016\u0010\u0017¨\u0006\u0018"}, d2 = {"com/discord/chat/bridge/media/UnfurledMediaItem.$serializer", "Lbs/h0;", "Lcom/discord/chat/bridge/media/UnfurledMediaItem;", "<init>", "()V", "Lkotlinx/serialization/encoding/Encoder;", "encoder", "value", "", "serialize", "(Lkotlinx/serialization/encoding/Encoder;Lcom/discord/chat/bridge/media/UnfurledMediaItem;)V", "Lkotlinx/serialization/encoding/Decoder;", "decoder", "deserialize", "(Lkotlinx/serialization/encoding/Decoder;)Lcom/discord/chat/bridge/media/UnfurledMediaItem;", "", "Lkotlinx/serialization/KSerializer;", "childSerializers", "()[Lkotlinx/serialization/KSerializer;", "Lkotlinx/serialization/descriptors/SerialDescriptor;", "descriptor", "Lkotlinx/serialization/descriptors/SerialDescriptor;", "getDescriptor", "()Lkotlinx/serialization/descriptors/SerialDescriptor;", "chat_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
/* loaded from: classes.dex */
public /* synthetic */ class UnfurledMediaItem$$serializer implements h0 {

    @NotNull
    public static final UnfurledMediaItem$$serializer INSTANCE;

    @NotNull
    private static final SerialDescriptor descriptor;

    static {
        UnfurledMediaItem$$serializer unfurledMediaItem$$serializer = new UnfurledMediaItem$$serializer();
        INSTANCE = unfurledMediaItem$$serializer;
        j1 j1Var = new j1("com.discord.chat.bridge.media.UnfurledMediaItem", unfurledMediaItem$$serializer, 10);
        j1Var.k("url", false);
        j1Var.k("proxyUrl", false);
        j1Var.k("loadingState", false);
        j1Var.k("height", true);
        j1Var.k("width", true);
        j1Var.k("contentType", true);
        j1Var.k("placeholder", true);
        j1Var.k("placeholderVersion", true);
        j1Var.k("contentScanMetadata", true);
        j1Var.k("srcIsAnimated", false);
        descriptor = j1Var;
    }

    private UnfurledMediaItem$$serializer() {
    }

    @Override // bs.h0
    @NotNull
    public final KSerializer[] childSerializers() {
        v1 v1Var = v1.a;
        o0 o0Var = o0.a;
        return new KSerializer[]{v1Var, v1Var, UnfurledMediaLoadingState.Serializer.INSTANCE, e.o(o0Var), e.o(o0Var), e.o(v1Var), e.o(v1Var), e.o(o0Var), e.o(ContentScanMetadata$$serializer.INSTANCE), g.a};
    }

    @Override // kotlinx.serialization.DeserializationStrategy
    @NotNull
    public final UnfurledMediaItem deserialize(@NotNull Decoder decoder) {
        boolean z5;
        ContentScanMetadata contentScanMetadata;
        Integer num;
        String str;
        String str2;
        Integer num2;
        Integer num3;
        UnfurledMediaLoadingState unfurledMediaLoadingState;
        int i5;
        String str3;
        String str4;
        Intrinsics.checkNotNullParameter(decoder, "decoder");
        SerialDescriptor serialDescriptor = descriptor;
        CompositeDecoder beginStructure = decoder.beginStructure(serialDescriptor);
        int i6 = 9;
        if (beginStructure.decodeSequentially()) {
            String decodeStringElement = beginStructure.decodeStringElement(serialDescriptor, 0);
            String decodeStringElement2 = beginStructure.decodeStringElement(serialDescriptor, 1);
            UnfurledMediaLoadingState unfurledMediaLoadingState2 = (UnfurledMediaLoadingState) beginStructure.decodeSerializableElement(serialDescriptor, 2, UnfurledMediaLoadingState.Serializer.INSTANCE, null);
            o0 o0Var = o0.a;
            Integer num4 = (Integer) beginStructure.decodeNullableSerializableElement(serialDescriptor, 3, o0Var, null);
            Integer num5 = (Integer) beginStructure.decodeNullableSerializableElement(serialDescriptor, 4, o0Var, null);
            v1 v1Var = v1.a;
            String str5 = (String) beginStructure.decodeNullableSerializableElement(serialDescriptor, 5, v1Var, null);
            String str6 = (String) beginStructure.decodeNullableSerializableElement(serialDescriptor, 6, v1Var, null);
            Integer num6 = (Integer) beginStructure.decodeNullableSerializableElement(serialDescriptor, 7, o0Var, null);
            ContentScanMetadata contentScanMetadata2 = (ContentScanMetadata) beginStructure.decodeNullableSerializableElement(serialDescriptor, 8, ContentScanMetadata$$serializer.INSTANCE, null);
            str3 = decodeStringElement;
            z5 = beginStructure.decodeBooleanElement(serialDescriptor, 9);
            num = num6;
            str2 = str6;
            str = str5;
            num3 = num4;
            contentScanMetadata = contentScanMetadata2;
            num2 = num5;
            unfurledMediaLoadingState = unfurledMediaLoadingState2;
            str4 = decodeStringElement2;
            i5 = 1023;
        } else {
            boolean z6 = true;
            boolean z7 = false;
            ContentScanMetadata contentScanMetadata3 = null;
            Integer num7 = null;
            String str7 = null;
            String str8 = null;
            Integer num8 = null;
            Integer num9 = null;
            String str9 = null;
            String str10 = null;
            int i10 = 0;
            UnfurledMediaLoadingState unfurledMediaLoadingState3 = null;
            while (z6) {
                int decodeElementIndex = beginStructure.decodeElementIndex(serialDescriptor);
                switch (decodeElementIndex) {
                    case -1:
                        z6 = false;
                    case 0:
                        i10 |= 1;
                        str9 = beginStructure.decodeStringElement(serialDescriptor, 0);
                        i6 = 9;
                    case 1:
                        str10 = beginStructure.decodeStringElement(serialDescriptor, 1);
                        i10 |= 2;
                        i6 = 9;
                    case 2:
                        unfurledMediaLoadingState3 = (UnfurledMediaLoadingState) beginStructure.decodeSerializableElement(serialDescriptor, 2, UnfurledMediaLoadingState.Serializer.INSTANCE, unfurledMediaLoadingState3);
                        i10 |= 4;
                        i6 = 9;
                    case 3:
                        num9 = (Integer) beginStructure.decodeNullableSerializableElement(serialDescriptor, 3, o0.a, num9);
                        i10 |= 8;
                        i6 = 9;
                    case 4:
                        num8 = (Integer) beginStructure.decodeNullableSerializableElement(serialDescriptor, 4, o0.a, num8);
                        i10 |= 16;
                        i6 = 9;
                    case 5:
                        str7 = (String) beginStructure.decodeNullableSerializableElement(serialDescriptor, 5, v1.a, str7);
                        i10 |= 32;
                        i6 = 9;
                    case 6:
                        str8 = (String) beginStructure.decodeNullableSerializableElement(serialDescriptor, 6, v1.a, str8);
                        i10 |= 64;
                        i6 = 9;
                    case 7:
                        num7 = (Integer) beginStructure.decodeNullableSerializableElement(serialDescriptor, 7, o0.a, num7);
                        i10 |= IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
                        i6 = 9;
                    case 8:
                        contentScanMetadata3 = (ContentScanMetadata) beginStructure.decodeNullableSerializableElement(serialDescriptor, 8, ContentScanMetadata$$serializer.INSTANCE, contentScanMetadata3);
                        i10 |= IntBufferBatchMountItem.INSTRUCTION_UPDATE_EVENT_EMITTER;
                    case 9:
                        z7 = beginStructure.decodeBooleanElement(serialDescriptor, i6);
                        i10 |= IntBufferBatchMountItem.INSTRUCTION_UPDATE_PADDING;
                    default:
                        throw new r(decodeElementIndex);
                }
            }
            z5 = z7;
            contentScanMetadata = contentScanMetadata3;
            num = num7;
            str = str7;
            str2 = str8;
            num2 = num8;
            num3 = num9;
            unfurledMediaLoadingState = unfurledMediaLoadingState3;
            i5 = i10;
            str3 = str9;
            str4 = str10;
        }
        beginStructure.endStructure(serialDescriptor);
        return new UnfurledMediaItem(i5, str3, str4, unfurledMediaLoadingState, num3, num2, str, str2, num, contentScanMetadata, z5, (SerializationConstructorMarker) null);
    }

    @Override // kotlinx.serialization.DeserializationStrategy
    @NotNull
    public final SerialDescriptor getDescriptor() {
        return descriptor;
    }

    @Override // kotlinx.serialization.KSerializer
    public final void serialize(@NotNull Encoder encoder, @NotNull UnfurledMediaItem value) {
        Intrinsics.checkNotNullParameter(encoder, "encoder");
        Intrinsics.checkNotNullParameter(value, "value");
        SerialDescriptor serialDescriptor = descriptor;
        CompositeEncoder beginStructure = encoder.beginStructure(serialDescriptor);
        UnfurledMediaItem.write$Self$chat_release(value, beginStructure, serialDescriptor);
        beginStructure.endStructure(serialDescriptor);
    }

    @Override // bs.h0
    @NotNull
    public KSerializer[] typeParametersSerializers() {
        return h1.f3190b;
    }
}
