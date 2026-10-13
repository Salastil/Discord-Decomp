package com.discord.contact_sync;

import bs.g;
import bs.h0;
import bs.h1;
import bs.j1;
import bs.v1;
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
import org.jetbrains.annotations.NotNull;

@d
@Metadata(d1 = {"\u0000:\n\u0000\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0010\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0010\u0011\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0005\bÇ\u0002\u0018\u00002\b\u0012\u0004\u0012\u00020\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0003\u0010\u0004J\u001d\u0010\t\u001a\u00020\b2\u0006\u0010\u0006\u001a\u00020\u00052\u0006\u0010\u0007\u001a\u00020\u0002¢\u0006\u0004\b\t\u0010\nJ\u0015\u0010\r\u001a\u00020\u00022\u0006\u0010\f\u001a\u00020\u000b¢\u0006\u0004\b\r\u0010\u000eJ\u0017\u0010\u0011\u001a\f\u0012\b\u0012\u0006\u0012\u0002\b\u00030\u00100\u000f¢\u0006\u0004\b\u0011\u0010\u0012R\u0017\u0010\u0014\u001a\u00020\u00138\u0006¢\u0006\f\n\u0004\b\u0014\u0010\u0015\u001a\u0004\b\u0016\u0010\u0017¨\u0006\u0018"}, d2 = {"com/discord/contact_sync/ContactSyncBlobEntry.$serializer", "Lbs/h0;", "Lcom/discord/contact_sync/ContactSyncBlobEntry;", "<init>", "()V", "Lkotlinx/serialization/encoding/Encoder;", "encoder", "value", "", "serialize", "(Lkotlinx/serialization/encoding/Encoder;Lcom/discord/contact_sync/ContactSyncBlobEntry;)V", "Lkotlinx/serialization/encoding/Decoder;", "decoder", "deserialize", "(Lkotlinx/serialization/encoding/Decoder;)Lcom/discord/contact_sync/ContactSyncBlobEntry;", "", "Lkotlinx/serialization/KSerializer;", "childSerializers", "()[Lkotlinx/serialization/KSerializer;", "Lkotlinx/serialization/descriptors/SerialDescriptor;", "descriptor", "Lkotlinx/serialization/descriptors/SerialDescriptor;", "getDescriptor", "()Lkotlinx/serialization/descriptors/SerialDescriptor;", "contact_sync_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
/* loaded from: classes.dex */
public /* synthetic */ class ContactSyncBlobEntry$$serializer implements h0 {

    @NotNull
    public static final ContactSyncBlobEntry$$serializer INSTANCE;

    @NotNull
    private static final SerialDescriptor descriptor;

    static {
        ContactSyncBlobEntry$$serializer contactSyncBlobEntry$$serializer = new ContactSyncBlobEntry$$serializer();
        INSTANCE = contactSyncBlobEntry$$serializer;
        j1 j1Var = new j1("com.discord.contact_sync.ContactSyncBlobEntry", contactSyncBlobEntry$$serializer, 6);
        j1Var.k("phone", false);
        j1Var.k("unencryptedName", false);
        j1Var.k("hasImageData", false);
        j1Var.k("deviceContactId", false);
        j1Var.k("givenName", false);
        j1Var.k("familyName", false);
        descriptor = j1Var;
    }

    private ContactSyncBlobEntry$$serializer() {
    }

    @Override // bs.h0
    @NotNull
    public final KSerializer[] childSerializers() {
        v1 v1Var = v1.a;
        return new KSerializer[]{v1Var, v1Var, g.a, v1Var, v1Var, v1Var};
    }

    @Override // kotlinx.serialization.DeserializationStrategy
    @NotNull
    public final ContactSyncBlobEntry deserialize(@NotNull Decoder decoder) {
        String str;
        String str2;
        String str3;
        String str4;
        boolean z5;
        String str5;
        int i5;
        Intrinsics.checkNotNullParameter(decoder, "decoder");
        SerialDescriptor serialDescriptor = descriptor;
        CompositeDecoder beginStructure = decoder.beginStructure(serialDescriptor);
        if (beginStructure.decodeSequentially()) {
            str = beginStructure.decodeStringElement(serialDescriptor, 0);
            String decodeStringElement = beginStructure.decodeStringElement(serialDescriptor, 1);
            boolean decodeBooleanElement = beginStructure.decodeBooleanElement(serialDescriptor, 2);
            String decodeStringElement2 = beginStructure.decodeStringElement(serialDescriptor, 3);
            String decodeStringElement3 = beginStructure.decodeStringElement(serialDescriptor, 4);
            str2 = beginStructure.decodeStringElement(serialDescriptor, 5);
            str3 = decodeStringElement2;
            str4 = decodeStringElement3;
            z5 = decodeBooleanElement;
            str5 = decodeStringElement;
            i5 = 63;
        } else {
            str = null;
            String str6 = null;
            String str7 = null;
            String str8 = null;
            String str9 = null;
            boolean z6 = true;
            boolean z7 = false;
            int i6 = 0;
            while (z6) {
                int decodeElementIndex = beginStructure.decodeElementIndex(serialDescriptor);
                switch (decodeElementIndex) {
                    case -1:
                        z6 = false;
                        continue;
                    case 0:
                        str = beginStructure.decodeStringElement(serialDescriptor, 0);
                        i6 |= 1;
                        continue;
                    case 1:
                        str9 = beginStructure.decodeStringElement(serialDescriptor, 1);
                        i6 |= 2;
                        break;
                    case 2:
                        z7 = beginStructure.decodeBooleanElement(serialDescriptor, 2);
                        i6 |= 4;
                        break;
                    case 3:
                        str7 = beginStructure.decodeStringElement(serialDescriptor, 3);
                        i6 |= 8;
                        break;
                    case 4:
                        str8 = beginStructure.decodeStringElement(serialDescriptor, 4);
                        i6 |= 16;
                        break;
                    case 5:
                        str6 = beginStructure.decodeStringElement(serialDescriptor, 5);
                        i6 |= 32;
                        break;
                    default:
                        throw new r(decodeElementIndex);
                }
            }
            str2 = str6;
            str3 = str7;
            str4 = str8;
            z5 = z7;
            str5 = str9;
            i5 = i6;
        }
        String str10 = str;
        beginStructure.endStructure(serialDescriptor);
        return new ContactSyncBlobEntry(i5, str10, str5, z5, str3, str4, str2, null);
    }

    @Override // kotlinx.serialization.DeserializationStrategy
    @NotNull
    public final SerialDescriptor getDescriptor() {
        return descriptor;
    }

    @Override // kotlinx.serialization.KSerializer
    public final void serialize(@NotNull Encoder encoder, @NotNull ContactSyncBlobEntry value) {
        Intrinsics.checkNotNullParameter(encoder, "encoder");
        Intrinsics.checkNotNullParameter(value, "value");
        SerialDescriptor serialDescriptor = descriptor;
        CompositeEncoder beginStructure = encoder.beginStructure(serialDescriptor);
        ContactSyncBlobEntry.write$Self$contact_sync_release(value, beginStructure, serialDescriptor);
        beginStructure.endStructure(serialDescriptor);
    }

    @Override // bs.h0
    @NotNull
    public KSerializer[] typeParametersSerializers() {
        return h1.f3190b;
    }
}
