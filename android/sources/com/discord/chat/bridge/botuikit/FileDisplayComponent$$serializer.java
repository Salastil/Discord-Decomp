package com.discord.chat.bridge.botuikit;

import bs.c1;
import bs.g;
import bs.h0;
import bs.h1;
import bs.j1;
import bs.o0;
import bs.v1;
import com.discord.chat.bridge.media.UnfurledMediaItem;
import com.discord.chat.bridge.media.UnfurledMediaItem$$serializer;
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
import nf.e;
import org.jetbrains.annotations.NotNull;

@d
@Metadata(d1 = {"\u0000:\n\u0000\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0010\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0010\u0011\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0005\bÇ\u0002\u0018\u00002\b\u0012\u0004\u0012\u00020\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0003\u0010\u0004J\u001d\u0010\t\u001a\u00020\b2\u0006\u0010\u0006\u001a\u00020\u00052\u0006\u0010\u0007\u001a\u00020\u0002¢\u0006\u0004\b\t\u0010\nJ\u0015\u0010\r\u001a\u00020\u00022\u0006\u0010\f\u001a\u00020\u000b¢\u0006\u0004\b\r\u0010\u000eJ\u0017\u0010\u0011\u001a\f\u0012\b\u0012\u0006\u0012\u0002\b\u00030\u00100\u000f¢\u0006\u0004\b\u0011\u0010\u0012R\u0017\u0010\u0014\u001a\u00020\u00138\u0006¢\u0006\f\n\u0004\b\u0014\u0010\u0015\u001a\u0004\b\u0016\u0010\u0017¨\u0006\u0018"}, d2 = {"com/discord/chat/bridge/botuikit/FileDisplayComponent.$serializer", "Lbs/h0;", "Lcom/discord/chat/bridge/botuikit/FileDisplayComponent;", "<init>", "()V", "Lkotlinx/serialization/encoding/Encoder;", "encoder", "value", "", "serialize", "(Lkotlinx/serialization/encoding/Encoder;Lcom/discord/chat/bridge/botuikit/FileDisplayComponent;)V", "Lkotlinx/serialization/encoding/Decoder;", "decoder", "deserialize", "(Lkotlinx/serialization/encoding/Decoder;)Lcom/discord/chat/bridge/botuikit/FileDisplayComponent;", "", "Lkotlinx/serialization/KSerializer;", "childSerializers", "()[Lkotlinx/serialization/KSerializer;", "Lkotlinx/serialization/descriptors/SerialDescriptor;", "descriptor", "Lkotlinx/serialization/descriptors/SerialDescriptor;", "getDescriptor", "()Lkotlinx/serialization/descriptors/SerialDescriptor;", "chat_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
/* loaded from: classes.dex */
public /* synthetic */ class FileDisplayComponent$$serializer implements h0 {

    @NotNull
    public static final FileDisplayComponent$$serializer INSTANCE;

    @NotNull
    private static final SerialDescriptor descriptor;

    static {
        FileDisplayComponent$$serializer fileDisplayComponent$$serializer = new FileDisplayComponent$$serializer();
        INSTANCE = fileDisplayComponent$$serializer;
        j1 j1Var = new j1("13", fileDisplayComponent$$serializer, 10);
        j1Var.k("type", false);
        j1Var.k(StackTraceHelper.ID_KEY, false);
        j1Var.k("file", false);
        j1Var.k(StackTraceHelper.NAME_KEY, false);
        j1Var.k("size", false);
        j1Var.k("isSuspiciousDownload", true);
        j1Var.k("isSpoiler", false);
        j1Var.k("spoilerDescription", false);
        j1Var.k("spoilerOrNull", true);
        j1Var.k("obscureOrNull", true);
        descriptor = j1Var;
    }

    private FileDisplayComponent$$serializer() {
    }

    @Override // bs.h0
    @NotNull
    public final KSerializer[] childSerializers() {
        v1 v1Var = v1.a;
        KSerializer o6 = e.o(v1Var);
        KSerializer o7 = e.o(v1Var);
        KSerializer o10 = e.o(c1.a);
        g gVar = g.a;
        return new KSerializer[]{o0.a, v1Var, UnfurledMediaItem$$serializer.INSTANCE, v1Var, v1Var, gVar, gVar, o6, o7, o10};
    }

    @Override // kotlinx.serialization.DeserializationStrategy
    @NotNull
    public final FileDisplayComponent deserialize(@NotNull Decoder decoder) {
        int i5;
        Void r32;
        String str;
        String str2;
        UnfurledMediaItem unfurledMediaItem;
        boolean z5;
        boolean z6;
        int i6;
        String str3;
        String str4;
        String str5;
        Intrinsics.checkNotNullParameter(decoder, "decoder");
        SerialDescriptor serialDescriptor = descriptor;
        CompositeDecoder beginStructure = decoder.beginStructure(serialDescriptor);
        int i10 = 9;
        int i11 = 7;
        if (beginStructure.decodeSequentially()) {
            i5 = beginStructure.decodeIntElement(serialDescriptor, 0);
            String decodeStringElement = beginStructure.decodeStringElement(serialDescriptor, 1);
            UnfurledMediaItem unfurledMediaItem2 = (UnfurledMediaItem) beginStructure.decodeSerializableElement(serialDescriptor, 2, UnfurledMediaItem$$serializer.INSTANCE, null);
            String decodeStringElement2 = beginStructure.decodeStringElement(serialDescriptor, 3);
            String decodeStringElement3 = beginStructure.decodeStringElement(serialDescriptor, 4);
            boolean decodeBooleanElement = beginStructure.decodeBooleanElement(serialDescriptor, 5);
            boolean decodeBooleanElement2 = beginStructure.decodeBooleanElement(serialDescriptor, 6);
            v1 v1Var = v1.a;
            String str6 = (String) beginStructure.decodeNullableSerializableElement(serialDescriptor, 7, v1Var, null);
            String str7 = (String) beginStructure.decodeNullableSerializableElement(serialDescriptor, 8, v1Var, null);
            r32 = (Void) beginStructure.decodeNullableSerializableElement(serialDescriptor, 9, c1.a, null);
            str2 = str6;
            z5 = decodeBooleanElement2;
            z6 = decodeBooleanElement;
            str4 = decodeStringElement2;
            str = str7;
            str5 = decodeStringElement3;
            unfurledMediaItem = unfurledMediaItem2;
            str3 = decodeStringElement;
            i6 = 1023;
        } else {
            boolean z7 = true;
            i5 = 0;
            boolean z8 = false;
            int i12 = 0;
            Void r7 = null;
            String str8 = null;
            String str9 = null;
            String str10 = null;
            String str11 = null;
            String str12 = null;
            boolean z10 = false;
            UnfurledMediaItem unfurledMediaItem3 = null;
            while (z7) {
                int decodeElementIndex = beginStructure.decodeElementIndex(serialDescriptor);
                switch (decodeElementIndex) {
                    case -1:
                        z7 = false;
                        i10 = 9;
                    case 0:
                        i12 |= 1;
                        i5 = beginStructure.decodeIntElement(serialDescriptor, 0);
                        i10 = 9;
                        i11 = 7;
                    case 1:
                        str10 = beginStructure.decodeStringElement(serialDescriptor, 1);
                        i12 |= 2;
                        i10 = 9;
                        i11 = 7;
                    case 2:
                        unfurledMediaItem3 = (UnfurledMediaItem) beginStructure.decodeSerializableElement(serialDescriptor, 2, UnfurledMediaItem$$serializer.INSTANCE, unfurledMediaItem3);
                        i12 |= 4;
                        i10 = 9;
                        i11 = 7;
                    case 3:
                        str11 = beginStructure.decodeStringElement(serialDescriptor, 3);
                        i12 |= 8;
                        i10 = 9;
                    case 4:
                        str12 = beginStructure.decodeStringElement(serialDescriptor, 4);
                        i12 |= 16;
                    case 5:
                        z8 = beginStructure.decodeBooleanElement(serialDescriptor, 5);
                        i12 |= 32;
                    case 6:
                        z10 = beginStructure.decodeBooleanElement(serialDescriptor, 6);
                        i12 |= 64;
                    case 7:
                        str9 = (String) beginStructure.decodeNullableSerializableElement(serialDescriptor, i11, v1.a, str9);
                        i12 |= IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
                    case 8:
                        str8 = (String) beginStructure.decodeNullableSerializableElement(serialDescriptor, 8, v1.a, str8);
                        i12 |= IntBufferBatchMountItem.INSTRUCTION_UPDATE_EVENT_EMITTER;
                    case 9:
                        r7 = (Void) beginStructure.decodeNullableSerializableElement(serialDescriptor, i10, c1.a, r7);
                        i12 |= IntBufferBatchMountItem.INSTRUCTION_UPDATE_PADDING;
                    default:
                        throw new r(decodeElementIndex);
                }
            }
            r32 = r7;
            str = str8;
            str2 = str9;
            unfurledMediaItem = unfurledMediaItem3;
            z5 = z10;
            z6 = z8;
            i6 = i12;
            str3 = str10;
            str4 = str11;
            str5 = str12;
        }
        int i13 = i5;
        beginStructure.endStructure(serialDescriptor);
        return new FileDisplayComponent(i6, i13, str3, unfurledMediaItem, str4, str5, z6, z5, str2, str, r32, null);
    }

    @Override // kotlinx.serialization.DeserializationStrategy
    @NotNull
    public final SerialDescriptor getDescriptor() {
        return descriptor;
    }

    @Override // kotlinx.serialization.KSerializer
    public final void serialize(@NotNull Encoder encoder, @NotNull FileDisplayComponent value) {
        Intrinsics.checkNotNullParameter(encoder, "encoder");
        Intrinsics.checkNotNullParameter(value, "value");
        SerialDescriptor serialDescriptor = descriptor;
        CompositeEncoder beginStructure = encoder.beginStructure(serialDescriptor);
        FileDisplayComponent.write$Self$chat_release(value, beginStructure, serialDescriptor);
        beginStructure.endStructure(serialDescriptor);
    }

    @Override // bs.h0
    @NotNull
    public KSerializer[] typeParametersSerializers() {
        return h1.f3190b;
    }
}
