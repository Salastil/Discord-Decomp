package com.discord.chat.bridge.botuikit;

import androidx.recyclerview.widget.RecyclerView;
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
import nf.e;
import org.jetbrains.annotations.NotNull;
import org.webrtc.PeerConnection;

@d
@Metadata(d1 = {"\u0000:\n\u0000\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0010\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0010\u0011\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0005\bÇ\u0002\u0018\u00002\b\u0012\u0004\u0012\u00020\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0003\u0010\u0004J\u001d\u0010\t\u001a\u00020\b2\u0006\u0010\u0006\u001a\u00020\u00052\u0006\u0010\u0007\u001a\u00020\u0002¢\u0006\u0004\b\t\u0010\nJ\u0015\u0010\r\u001a\u00020\u00022\u0006\u0010\f\u001a\u00020\u000b¢\u0006\u0004\b\r\u0010\u000eJ\u0017\u0010\u0011\u001a\f\u0012\b\u0012\u0006\u0012\u0002\b\u00030\u00100\u000f¢\u0006\u0004\b\u0011\u0010\u0012R\u0017\u0010\u0014\u001a\u00020\u00138\u0006¢\u0006\f\n\u0004\b\u0014\u0010\u0015\u001a\u0004\b\u0016\u0010\u0017¨\u0006\u0018"}, d2 = {"com/discord/chat/bridge/botuikit/ThumbnailDisplayComponent.$serializer", "Lbs/h0;", "Lcom/discord/chat/bridge/botuikit/ThumbnailDisplayComponent;", "<init>", "()V", "Lkotlinx/serialization/encoding/Encoder;", "encoder", "value", "", "serialize", "(Lkotlinx/serialization/encoding/Encoder;Lcom/discord/chat/bridge/botuikit/ThumbnailDisplayComponent;)V", "Lkotlinx/serialization/encoding/Decoder;", "decoder", "deserialize", "(Lkotlinx/serialization/encoding/Decoder;)Lcom/discord/chat/bridge/botuikit/ThumbnailDisplayComponent;", "", "Lkotlinx/serialization/KSerializer;", "childSerializers", "()[Lkotlinx/serialization/KSerializer;", "Lkotlinx/serialization/descriptors/SerialDescriptor;", "descriptor", "Lkotlinx/serialization/descriptors/SerialDescriptor;", "getDescriptor", "()Lkotlinx/serialization/descriptors/SerialDescriptor;", "chat_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
/* loaded from: classes.dex */
public /* synthetic */ class ThumbnailDisplayComponent$$serializer implements h0 {

    @NotNull
    public static final ThumbnailDisplayComponent$$serializer INSTANCE;

    @NotNull
    private static final SerialDescriptor descriptor;

    static {
        ThumbnailDisplayComponent$$serializer thumbnailDisplayComponent$$serializer = new ThumbnailDisplayComponent$$serializer();
        INSTANCE = thumbnailDisplayComponent$$serializer;
        j1 j1Var = new j1("11", thumbnailDisplayComponent$$serializer, 16);
        j1Var.k("type", false);
        j1Var.k(StackTraceHelper.ID_KEY, false);
        j1Var.k("media", false);
        j1Var.k("description", true);
        j1Var.k("isSpoiler", false);
        j1Var.k("spoilerDescription", false);
        j1Var.k("isObscure", false);
        j1Var.k("isObscureAwaitingScan", false);
        j1Var.k("obscureHideControls", false);
        j1Var.k("obscureIsOpaque", false);
        j1Var.k("obscureDescription", false);
        j1Var.k("verifyAge", false);
        j1Var.k("descriptionHint", false);
        j1Var.k(ViewProps.ACCESSIBILITY_ROLE, false);
        j1Var.k("spoilerOrNull", true);
        j1Var.k("obscureOrNull", true);
        descriptor = j1Var;
    }

    private ThumbnailDisplayComponent$$serializer() {
    }

    @Override // bs.h0
    @NotNull
    public final KSerializer[] childSerializers() {
        v1 v1Var = v1.a;
        KSerializer o6 = e.o(v1Var);
        g gVar = g.a;
        return new KSerializer[]{o0.a, v1Var, UnfurledMediaItem$$serializer.INSTANCE, o6, gVar, e.o(v1Var), gVar, gVar, gVar, gVar, e.o(v1Var), e.o(gVar), v1Var, v1Var, e.o(v1Var), e.o(v1Var)};
    }

    @Override // kotlinx.serialization.DeserializationStrategy
    @NotNull
    public final ThumbnailDisplayComponent deserialize(@NotNull Decoder decoder) {
        int i5;
        String str;
        String str2;
        UnfurledMediaItem unfurledMediaItem;
        int i6;
        String str3;
        String str4;
        String str5;
        Boolean bool;
        String str6;
        String str7;
        String str8;
        boolean z5;
        boolean z6;
        boolean z7;
        boolean z8;
        boolean z10;
        int i10;
        Intrinsics.checkNotNullParameter(decoder, "decoder");
        SerialDescriptor serialDescriptor = descriptor;
        CompositeDecoder beginStructure = decoder.beginStructure(serialDescriptor);
        int i11 = 11;
        int i12 = 10;
        int i13 = 8;
        if (beginStructure.decodeSequentially()) {
            int decodeIntElement = beginStructure.decodeIntElement(serialDescriptor, 0);
            String decodeStringElement = beginStructure.decodeStringElement(serialDescriptor, 1);
            UnfurledMediaItem unfurledMediaItem2 = (UnfurledMediaItem) beginStructure.decodeSerializableElement(serialDescriptor, 2, UnfurledMediaItem$$serializer.INSTANCE, null);
            v1 v1Var = v1.a;
            String str9 = (String) beginStructure.decodeNullableSerializableElement(serialDescriptor, 3, v1Var, null);
            boolean decodeBooleanElement = beginStructure.decodeBooleanElement(serialDescriptor, 4);
            String str10 = (String) beginStructure.decodeNullableSerializableElement(serialDescriptor, 5, v1Var, null);
            boolean decodeBooleanElement2 = beginStructure.decodeBooleanElement(serialDescriptor, 6);
            boolean decodeBooleanElement3 = beginStructure.decodeBooleanElement(serialDescriptor, 7);
            boolean decodeBooleanElement4 = beginStructure.decodeBooleanElement(serialDescriptor, 8);
            boolean decodeBooleanElement5 = beginStructure.decodeBooleanElement(serialDescriptor, 9);
            String str11 = (String) beginStructure.decodeNullableSerializableElement(serialDescriptor, 10, v1Var, null);
            Boolean bool2 = (Boolean) beginStructure.decodeNullableSerializableElement(serialDescriptor, 11, g.a, null);
            String decodeStringElement2 = beginStructure.decodeStringElement(serialDescriptor, 12);
            String decodeStringElement3 = beginStructure.decodeStringElement(serialDescriptor, 13);
            String str12 = (String) beginStructure.decodeNullableSerializableElement(serialDescriptor, 14, v1Var, null);
            str3 = (String) beginStructure.decodeNullableSerializableElement(serialDescriptor, 15, v1Var, null);
            unfurledMediaItem = unfurledMediaItem2;
            str6 = decodeStringElement;
            i6 = 65535;
            str7 = decodeStringElement2;
            str5 = str11;
            z5 = decodeBooleanElement5;
            z6 = decodeBooleanElement3;
            z7 = decodeBooleanElement2;
            str = str10;
            str2 = str9;
            z8 = decodeBooleanElement4;
            z10 = decodeBooleanElement;
            str4 = str12;
            str8 = decodeStringElement3;
            bool = bool2;
            i5 = decodeIntElement;
        } else {
            boolean z11 = true;
            int i14 = 0;
            boolean z12 = false;
            boolean z13 = false;
            boolean z14 = false;
            boolean z15 = false;
            boolean z16 = false;
            String str13 = null;
            String str14 = null;
            String str15 = null;
            String str16 = null;
            String str17 = null;
            Boolean bool3 = null;
            String str18 = null;
            String str19 = null;
            String str20 = null;
            int i15 = 0;
            UnfurledMediaItem unfurledMediaItem3 = null;
            while (z11) {
                int decodeElementIndex = beginStructure.decodeElementIndex(serialDescriptor);
                switch (decodeElementIndex) {
                    case -1:
                        z11 = false;
                    case 0:
                        i15 |= 1;
                        i13 = i13;
                        i14 = beginStructure.decodeIntElement(serialDescriptor, 0);
                        i11 = 11;
                        i12 = 10;
                    case 1:
                        i10 = i13;
                        str18 = beginStructure.decodeStringElement(serialDescriptor, 1);
                        i15 |= 2;
                        i13 = i10;
                        i11 = 11;
                        i12 = 10;
                    case 2:
                        i10 = i13;
                        unfurledMediaItem3 = (UnfurledMediaItem) beginStructure.decodeSerializableElement(serialDescriptor, 2, UnfurledMediaItem$$serializer.INSTANCE, unfurledMediaItem3);
                        i15 |= 4;
                        i13 = i10;
                        i11 = 11;
                        i12 = 10;
                    case 3:
                        i10 = i13;
                        str14 = (String) beginStructure.decodeNullableSerializableElement(serialDescriptor, 3, v1.a, str14);
                        i15 |= 8;
                        i13 = i10;
                        i11 = 11;
                        i12 = 10;
                    case 4:
                        i10 = i13;
                        z16 = beginStructure.decodeBooleanElement(serialDescriptor, 4);
                        i15 |= 16;
                        i13 = i10;
                        i11 = 11;
                        i12 = 10;
                    case 5:
                        i10 = i13;
                        str13 = (String) beginStructure.decodeNullableSerializableElement(serialDescriptor, 5, v1.a, str13);
                        i15 |= 32;
                        i13 = i10;
                        i11 = 11;
                        i12 = 10;
                    case 6:
                        z14 = beginStructure.decodeBooleanElement(serialDescriptor, 6);
                        i15 |= 64;
                        i13 = i13;
                        i11 = 11;
                    case 7:
                        z13 = beginStructure.decodeBooleanElement(serialDescriptor, 7);
                        i15 |= IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
                        i13 = i13;
                        i11 = 11;
                    case 8:
                        int i16 = i13;
                        z15 = beginStructure.decodeBooleanElement(serialDescriptor, i16);
                        i15 |= IntBufferBatchMountItem.INSTRUCTION_UPDATE_EVENT_EMITTER;
                        i13 = i16;
                    case 9:
                        z12 = beginStructure.decodeBooleanElement(serialDescriptor, 9);
                        i15 |= IntBufferBatchMountItem.INSTRUCTION_UPDATE_PADDING;
                        i13 = 8;
                    case 10:
                        str17 = (String) beginStructure.decodeNullableSerializableElement(serialDescriptor, i12, v1.a, str17);
                        i15 |= IntBufferBatchMountItem.INSTRUCTION_UPDATE_OVERFLOW_INSET;
                        i13 = 8;
                    case 11:
                        bool3 = (Boolean) beginStructure.decodeNullableSerializableElement(serialDescriptor, i11, g.a, bool3);
                        i15 |= RecyclerView.ItemAnimator.FLAG_MOVED;
                        i13 = 8;
                    case 12:
                        str19 = beginStructure.decodeStringElement(serialDescriptor, 12);
                        i15 |= RecyclerView.ItemAnimator.FLAG_APPEARED_IN_PRE_LAYOUT;
                        i13 = 8;
                    case 13:
                        str20 = beginStructure.decodeStringElement(serialDescriptor, 13);
                        i15 |= 8192;
                        i13 = 8;
                    case 14:
                        str16 = (String) beginStructure.decodeNullableSerializableElement(serialDescriptor, 14, v1.a, str16);
                        i15 |= 16384;
                        i13 = 8;
                    case 15:
                        str15 = (String) beginStructure.decodeNullableSerializableElement(serialDescriptor, 15, v1.a, str15);
                        i15 |= PeerConnection.PORTALLOCATOR_ENABLE_ANY_ADDRESS_PORTS;
                        i13 = 8;
                    default:
                        throw new r(decodeElementIndex);
                }
            }
            i5 = i14;
            str = str13;
            str2 = str14;
            unfurledMediaItem = unfurledMediaItem3;
            i6 = i15;
            str3 = str15;
            str4 = str16;
            str5 = str17;
            bool = bool3;
            str6 = str18;
            str7 = str19;
            str8 = str20;
            z5 = z12;
            z6 = z13;
            z7 = z14;
            z8 = z15;
            z10 = z16;
        }
        beginStructure.endStructure(serialDescriptor);
        return new ThumbnailDisplayComponent(i6, i5, str6, unfurledMediaItem, str2, z10, str, z7, z6, z8, z5, str5, bool, str7, str8, str4, str3, null);
    }

    @Override // kotlinx.serialization.DeserializationStrategy
    @NotNull
    public final SerialDescriptor getDescriptor() {
        return descriptor;
    }

    @Override // kotlinx.serialization.KSerializer
    public final void serialize(@NotNull Encoder encoder, @NotNull ThumbnailDisplayComponent value) {
        Intrinsics.checkNotNullParameter(encoder, "encoder");
        Intrinsics.checkNotNullParameter(value, "value");
        SerialDescriptor serialDescriptor = descriptor;
        CompositeEncoder beginStructure = encoder.beginStructure(serialDescriptor);
        ThumbnailDisplayComponent.write$Self$chat_release(value, beginStructure, serialDescriptor);
        beginStructure.endStructure(serialDescriptor);
    }

    @Override // bs.h0
    @NotNull
    public KSerializer[] typeParametersSerializers() {
        return h1.f3190b;
    }
}
