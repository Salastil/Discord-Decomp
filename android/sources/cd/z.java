package cd;

import a5.a0;
import android.media.MediaCodecInfo;
import android.util.Pair;
import androidx.recyclerview.widget.RecyclerView;
import com.discord.key_commands.KeyCommandDescriptor;
import com.discord.misc.utilities.chat_view_types.ChatViewRecyclerTypes;
import com.facebook.react.fabric.mounting.mountitems.IntBufferBatchMountItem;
import com.facebook.react.uimanager.events.PointerEventHelper;
import com.google.android.exoplayer2.Format;
import fi.e0;
import java.util.ArrayList;
import java.util.Collections;
import java.util.HashMap;
import java.util.List;
import java.util.regex.Matcher;
import java.util.regex.Pattern;
import ke.d0;
import org.webrtc.PeerConnection;

/* loaded from: classes3.dex */
public abstract class z {
    public static final Pattern a = Pattern.compile("^\\D?(\\d+)$");

    /* renamed from: b, reason: collision with root package name */
    public static final HashMap f3487b = new HashMap();

    /* renamed from: c, reason: collision with root package name */
    public static int f3488c = -1;

    public static void a(String str, ArrayList arrayList) {
        if ("audio/raw".equals(str)) {
            if (d0.a < 26 && d0.f13294b.equals("R9") && arrayList.size() == 1 && ((o) arrayList.get(0)).a.equals("OMX.MTK.AUDIO.DECODER.RAW")) {
                arrayList.add(o.h("OMX.google.raw.decoder", "audio/raw", "audio/raw", null, false, false));
            }
            Collections.sort(arrayList, new u(0, new t(2)));
        }
        int i5 = d0.a;
        if (i5 < 21 && arrayList.size() > 1) {
            String str2 = ((o) arrayList.get(0)).a;
            if ("OMX.SEC.mp3.dec".equals(str2) || "OMX.SEC.MP3.Decoder".equals(str2) || "OMX.brcm.audio.mp3.decoder".equals(str2)) {
                Collections.sort(arrayList, new u(0, new t(3)));
            }
        }
        if (i5 >= 32 || arrayList.size() <= 1 || !"OMX.qti.audio.decoder.flac".equals(((o) arrayList.get(0)).a)) {
            return;
        }
        arrayList.add((o) arrayList.remove(0));
    }

    public static String b(Format format) {
        Pair d6;
        if ("audio/eac3-joc".equals(format.I)) {
            return "audio/eac3";
        }
        if (!"video/dolby-vision".equals(format.I) || (d6 = d(format)) == null) {
            return null;
        }
        int intValue = ((Integer) d6.first).intValue();
        if (intValue == 16 || intValue == 256) {
            return "video/hevc";
        }
        if (intValue == 512) {
            return "video/avc";
        }
        return null;
    }

    public static String c(MediaCodecInfo mediaCodecInfo, String str, String str2) {
        for (String str3 : mediaCodecInfo.getSupportedTypes()) {
            if (str3.equalsIgnoreCase(str2)) {
                return str3;
            }
        }
        if (str2.equals("video/dolby-vision")) {
            if ("OMX.MS.HEVCDV.Decoder".equals(str)) {
                return "video/hevcdv";
            }
            if ("OMX.RTK.video.decoder".equals(str) || "OMX.realtek.video.decoder.tunneled".equals(str)) {
                return "video/dv_hevc";
            }
            return null;
        }
        if (str2.equals("audio/alac") && "OMX.lge.alac.decoder".equals(str)) {
            return "audio/x-lg-alac";
        }
        if (str2.equals("audio/flac") && "OMX.lge.flac.decoder".equals(str)) {
            return "audio/x-lg-flac";
        }
        if (str2.equals("audio/ac3") && "OMX.lge.ac3.decoder".equals(str)) {
            return "audio/lg-ac3";
        }
        return null;
    }

    /* JADX WARN: Can't fix incorrect switch cases order, some code will duplicate */
    /* JADX WARN: Multi-variable type inference failed */
    /* JADX WARN: Removed duplicated region for block: B:20:0x013b  */
    /* JADX WARN: Removed duplicated region for block: B:228:0x037c A[Catch: NumberFormatException -> 0x038a, TRY_LEAVE, TryCatch #3 {NumberFormatException -> 0x038a, blocks: (B:205:0x0333, B:207:0x0347, B:218:0x0365, B:228:0x037c), top: B:204:0x0333 }] */
    /* JADX WARN: Removed duplicated region for block: B:22:0x0141  */
    /* JADX WARN: Removed duplicated region for block: B:249:0x05b3  */
    /* JADX WARN: Removed duplicated region for block: B:251:0x05b9  */
    /* JADX WARN: Removed duplicated region for block: B:26:0x020e  */
    /* JADX WARN: Removed duplicated region for block: B:28:0x0214  */
    /* JADX WARN: Type inference failed for: r1v165 */
    /* JADX WARN: Type inference failed for: r1v167 */
    /* JADX WARN: Type inference failed for: r1v169 */
    /* JADX WARN: Type inference failed for: r1v171 */
    /* JADX WARN: Type inference failed for: r1v174 */
    /* JADX WARN: Type inference failed for: r1v177 */
    /* JADX WARN: Type inference failed for: r1v180 */
    /* JADX WARN: Type inference failed for: r1v183 */
    /* JADX WARN: Type inference failed for: r1v186 */
    /* JADX WARN: Type inference failed for: r1v189 */
    /* JADX WARN: Type inference failed for: r1v192 */
    /* JADX WARN: Type inference failed for: r1v195 */
    /* JADX WARN: Type inference failed for: r1v198 */
    /* JADX WARN: Type inference failed for: r1v199 */
    /* JADX WARN: Type inference failed for: r1v200 */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public static Pair d(Format format) {
        char c6;
        int i5;
        int i6;
        int parseInt;
        int parseInt2;
        int i10;
        int i11;
        int i12;
        char c8;
        int i13;
        boolean z5;
        char c10;
        Integer num;
        ?? r12;
        Integer valueOf = Integer.valueOf(IntBufferBatchMountItem.INSTRUCTION_UPDATE_OVERFLOW_INSET);
        Integer valueOf2 = Integer.valueOf(RecyclerView.ItemAnimator.FLAG_MOVED);
        Integer valueOf3 = Integer.valueOf(RecyclerView.ItemAnimator.FLAG_APPEARED_IN_PRE_LAYOUT);
        Integer valueOf4 = Integer.valueOf(IntBufferBatchMountItem.INSTRUCTION_UPDATE_PADDING);
        Integer valueOf5 = Integer.valueOf(IntBufferBatchMountItem.INSTRUCTION_UPDATE_EVENT_EMITTER);
        Integer valueOf6 = Integer.valueOf(IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT);
        String str = format.F;
        String str2 = format.F;
        if (str == null) {
            return null;
        }
        String[] split = str.split("\\.");
        boolean equals = "video/dolby-vision".equals(format.I);
        Pattern pattern = a;
        if (!equals) {
            String str3 = split[0];
            str3.getClass();
            switch (str3.hashCode()) {
                case 3004662:
                    if (str3.equals("av01")) {
                        c6 = 0;
                        break;
                    }
                    c6 = 65535;
                    break;
                case 3006243:
                    if (str3.equals("avc1")) {
                        c6 = 1;
                        break;
                    }
                    c6 = 65535;
                    break;
                case 3006244:
                    if (str3.equals("avc2")) {
                        c6 = 2;
                        break;
                    }
                    c6 = 65535;
                    break;
                case 3199032:
                    if (str3.equals("hev1")) {
                        c6 = 3;
                        break;
                    }
                    c6 = 65535;
                    break;
                case 3214780:
                    if (str3.equals("hvc1")) {
                        c6 = 4;
                        break;
                    }
                    c6 = 65535;
                    break;
                case 3356560:
                    if (str3.equals("mp4a")) {
                        c6 = 5;
                        break;
                    }
                    c6 = 65535;
                    break;
                case 3624515:
                    if (str3.equals("vp09")) {
                        c6 = 6;
                        break;
                    }
                    c6 = 65535;
                    break;
                default:
                    c6 = 65535;
                    break;
            }
            int i14 = 20;
            switch (c6) {
                case 0:
                    le.b bVar = format.U;
                    if (split.length < 4) {
                        a3.e.x("Ignoring malformed AV1 codec string: ", str2, "MediaCodecUtil");
                        break;
                    } else {
                        try {
                            int parseInt3 = Integer.parseInt(split[1]);
                            int parseInt4 = Integer.parseInt(split[2].substring(0, 2));
                            int parseInt5 = Integer.parseInt(split[3]);
                            if (parseInt3 == 0) {
                                int i15 = 8;
                                if (parseInt5 != 8 && parseInt5 != 10) {
                                    com.discord.chat.bridge.botuikit.a.q(parseInt5, "Unknown AV1 bit depth: ", "MediaCodecUtil");
                                    break;
                                } else {
                                    int i16 = parseInt5 == 8 ? 1 : (bVar == null || !(bVar.f13858v != null || (i5 = bVar.f13857i) == 7 || i5 == 6)) ? 2 : RecyclerView.ItemAnimator.FLAG_APPEARED_IN_PRE_LAYOUT;
                                    switch (parseInt4) {
                                        case 0:
                                            i15 = 1;
                                            break;
                                        case 1:
                                            i15 = 2;
                                            break;
                                        case 2:
                                            i15 = 4;
                                            break;
                                        case 3:
                                            break;
                                        case 4:
                                            i15 = 16;
                                            break;
                                        case 5:
                                            i15 = 32;
                                            break;
                                        case 6:
                                            i15 = 64;
                                            break;
                                        case 7:
                                            i15 = IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
                                            break;
                                        case 8:
                                            i15 = IntBufferBatchMountItem.INSTRUCTION_UPDATE_EVENT_EMITTER;
                                            break;
                                        case 9:
                                            i15 = IntBufferBatchMountItem.INSTRUCTION_UPDATE_PADDING;
                                            break;
                                        case 10:
                                            i15 = IntBufferBatchMountItem.INSTRUCTION_UPDATE_OVERFLOW_INSET;
                                            break;
                                        case 11:
                                            i15 = RecyclerView.ItemAnimator.FLAG_MOVED;
                                            break;
                                        case 12:
                                            i15 = RecyclerView.ItemAnimator.FLAG_APPEARED_IN_PRE_LAYOUT;
                                            break;
                                        case 13:
                                            i15 = 8192;
                                            break;
                                        case 14:
                                            i15 = 16384;
                                            break;
                                        case 15:
                                            i15 = 32768;
                                            break;
                                        case 16:
                                            i15 = 65536;
                                            break;
                                        case 17:
                                            i15 = KeyCommandDescriptor.ModifierFlags.SHIFT;
                                            break;
                                        case 18:
                                            i15 = KeyCommandDescriptor.ModifierFlags.CONTROL;
                                            break;
                                        case 19:
                                            i15 = KeyCommandDescriptor.ModifierFlags.ALTERNATE;
                                            break;
                                        case 20:
                                            i15 = KeyCommandDescriptor.ModifierFlags.COMMAND;
                                            break;
                                        case 21:
                                            i15 = KeyCommandDescriptor.ModifierFlags.NUMERIC_PAD;
                                            break;
                                        case 22:
                                            i15 = 4194304;
                                            break;
                                        case 23:
                                            i15 = 8388608;
                                            break;
                                        default:
                                            i15 = -1;
                                            break;
                                    }
                                    if (i15 != -1) {
                                        break;
                                    } else {
                                        com.discord.chat.bridge.botuikit.a.q(parseInt4, "Unknown AV1 level: ", "MediaCodecUtil");
                                        break;
                                    }
                                }
                            } else {
                                com.discord.chat.bridge.botuikit.a.q(parseInt3, "Unknown AV1 profile: ", "MediaCodecUtil");
                                break;
                            }
                        } catch (NumberFormatException unused) {
                            a3.e.x("Ignoring malformed AV1 codec string: ", str2, "MediaCodecUtil");
                            return null;
                        }
                    }
                    break;
                case 1:
                case 2:
                    if (split.length < 2) {
                        a3.e.x("Ignoring malformed AVC codec string: ", str2, "MediaCodecUtil");
                        break;
                    } else {
                        try {
                            if (split[1].length() != 6) {
                                i6 = 16;
                                if (split.length < 3) {
                                    ke.b.N("MediaCodecUtil", "Ignoring malformed AVC codec string: " + str2);
                                    break;
                                } else {
                                    parseInt = Integer.parseInt(split[1]);
                                    parseInt2 = Integer.parseInt(split[2]);
                                }
                            } else {
                                i6 = 16;
                                parseInt = Integer.parseInt(split[1].substring(0, 2), 16);
                                parseInt2 = Integer.parseInt(split[1].substring(4), 16);
                            }
                            if (parseInt == 66) {
                                i10 = -1;
                                i11 = 1;
                            } else if (parseInt == 77) {
                                i10 = -1;
                                i11 = 2;
                            } else if (parseInt == 88) {
                                i10 = -1;
                                i11 = 4;
                            } else if (parseInt == 100) {
                                i10 = -1;
                                i11 = 8;
                            } else if (parseInt == 110) {
                                i11 = i6;
                                i10 = -1;
                            } else if (parseInt == 122) {
                                i10 = -1;
                                i11 = 32;
                            } else if (parseInt != 244) {
                                i10 = -1;
                                i11 = -1;
                            } else {
                                i10 = -1;
                                i11 = 64;
                            }
                            if (i11 != i10) {
                                switch (parseInt2) {
                                    case 10:
                                        i6 = 1;
                                        break;
                                    case 11:
                                        i6 = 4;
                                        break;
                                    case 12:
                                        i6 = 8;
                                        break;
                                    case 13:
                                        break;
                                    default:
                                        switch (parseInt2) {
                                            case 20:
                                                i6 = 32;
                                                break;
                                            case 21:
                                                i6 = 64;
                                                break;
                                            case 22:
                                                i6 = IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
                                                break;
                                            default:
                                                switch (parseInt2) {
                                                    case 30:
                                                        i6 = IntBufferBatchMountItem.INSTRUCTION_UPDATE_EVENT_EMITTER;
                                                        break;
                                                    case 31:
                                                        i6 = IntBufferBatchMountItem.INSTRUCTION_UPDATE_PADDING;
                                                        break;
                                                    case 32:
                                                        i6 = IntBufferBatchMountItem.INSTRUCTION_UPDATE_OVERFLOW_INSET;
                                                        break;
                                                    default:
                                                        switch (parseInt2) {
                                                            case 40:
                                                                i6 = RecyclerView.ItemAnimator.FLAG_MOVED;
                                                                break;
                                                            case 41:
                                                                i6 = RecyclerView.ItemAnimator.FLAG_APPEARED_IN_PRE_LAYOUT;
                                                                break;
                                                            case 42:
                                                                i6 = 8192;
                                                                break;
                                                            default:
                                                                switch (parseInt2) {
                                                                    case 50:
                                                                        i6 = 16384;
                                                                        break;
                                                                    case ChatViewRecyclerTypes.MEDIA_ATTACHMENT_MOSAIC_VISUAL_PLACEHOLDER /* 51 */:
                                                                        i6 = 32768;
                                                                        break;
                                                                    case ChatViewRecyclerTypes.REFERRAL /* 52 */:
                                                                        i6 = 65536;
                                                                        break;
                                                                    default:
                                                                        i6 = -1;
                                                                        break;
                                                                }
                                                        }
                                                }
                                        }
                                }
                                if (i6 != -1) {
                                    break;
                                } else {
                                    com.discord.chat.bridge.botuikit.a.q(parseInt2, "Unknown AVC level: ", "MediaCodecUtil");
                                    break;
                                }
                            } else {
                                com.discord.chat.bridge.botuikit.a.q(parseInt, "Unknown AVC profile: ", "MediaCodecUtil");
                                break;
                            }
                        } catch (NumberFormatException unused2) {
                            a3.e.x("Ignoring malformed AVC codec string: ", str2, "MediaCodecUtil");
                            return null;
                        }
                    }
                case 3:
                case 4:
                    le.b bVar2 = format.U;
                    if (split.length < 4) {
                        a3.e.x("Ignoring malformed HEVC codec string: ", str2, "MediaCodecUtil");
                        break;
                    } else {
                        Matcher matcher = pattern.matcher(split[1]);
                        if (!matcher.matches()) {
                            a3.e.x("Ignoring malformed HEVC codec string: ", str2, "MediaCodecUtil");
                            break;
                        } else {
                            String group = matcher.group(1);
                            if (!"1".equals(group)) {
                                if (!"2".equals(group)) {
                                    a3.e.x("Unknown HEVC profile string: ", group, "MediaCodecUtil");
                                    break;
                                } else {
                                    i12 = (bVar2 == null || bVar2.f13857i != 6) ? 2 : RecyclerView.ItemAnimator.FLAG_APPEARED_IN_PRE_LAYOUT;
                                }
                            } else {
                                i12 = 1;
                            }
                            String str4 = split[3];
                            if (str4 != null) {
                                switch (str4.hashCode()) {
                                    case 70821:
                                        if (str4.equals("H30")) {
                                            c8 = 0;
                                            break;
                                        }
                                        c8 = 65535;
                                        break;
                                    case 70914:
                                        if (str4.equals("H60")) {
                                            c8 = 1;
                                            break;
                                        }
                                        c8 = 65535;
                                        break;
                                    case 70917:
                                        if (str4.equals("H63")) {
                                            c8 = 2;
                                            break;
                                        }
                                        c8 = 65535;
                                        break;
                                    case 71007:
                                        if (str4.equals("H90")) {
                                            c8 = 3;
                                            break;
                                        }
                                        c8 = 65535;
                                        break;
                                    case 71010:
                                        if (str4.equals("H93")) {
                                            c8 = 4;
                                            break;
                                        }
                                        c8 = 65535;
                                        break;
                                    case 74665:
                                        if (str4.equals("L30")) {
                                            c8 = 5;
                                            break;
                                        }
                                        c8 = 65535;
                                        break;
                                    case 74758:
                                        if (str4.equals("L60")) {
                                            c8 = 6;
                                            break;
                                        }
                                        c8 = 65535;
                                        break;
                                    case 74761:
                                        if (str4.equals("L63")) {
                                            c8 = 7;
                                            break;
                                        }
                                        c8 = 65535;
                                        break;
                                    case 74851:
                                        if (str4.equals("L90")) {
                                            c8 = '\b';
                                            break;
                                        }
                                        c8 = 65535;
                                        break;
                                    case 74854:
                                        if (str4.equals("L93")) {
                                            c8 = '\t';
                                            break;
                                        }
                                        c8 = 65535;
                                        break;
                                    case 2193639:
                                        if (str4.equals("H120")) {
                                            c8 = '\n';
                                            break;
                                        }
                                        c8 = 65535;
                                        break;
                                    case 2193642:
                                        if (str4.equals("H123")) {
                                            c8 = 11;
                                            break;
                                        }
                                        c8 = 65535;
                                        break;
                                    case 2193732:
                                        if (str4.equals("H150")) {
                                            c8 = '\f';
                                            break;
                                        }
                                        c8 = 65535;
                                        break;
                                    case 2193735:
                                        if (str4.equals("H153")) {
                                            c8 = '\r';
                                            break;
                                        }
                                        c8 = 65535;
                                        break;
                                    case 2193738:
                                        if (str4.equals("H156")) {
                                            c8 = 14;
                                            break;
                                        }
                                        c8 = 65535;
                                        break;
                                    case 2193825:
                                        if (str4.equals("H180")) {
                                            c8 = 15;
                                            break;
                                        }
                                        c8 = 65535;
                                        break;
                                    case 2193828:
                                        if (str4.equals("H183")) {
                                            c8 = 16;
                                            break;
                                        }
                                        c8 = 65535;
                                        break;
                                    case 2193831:
                                        if (str4.equals("H186")) {
                                            c8 = 17;
                                            break;
                                        }
                                        c8 = 65535;
                                        break;
                                    case 2312803:
                                        if (str4.equals("L120")) {
                                            c8 = 18;
                                            break;
                                        }
                                        c8 = 65535;
                                        break;
                                    case 2312806:
                                        if (str4.equals("L123")) {
                                            c8 = 19;
                                            break;
                                        }
                                        c8 = 65535;
                                        break;
                                    case 2312896:
                                        if (str4.equals("L150")) {
                                            c8 = 20;
                                            break;
                                        }
                                        c8 = 65535;
                                        break;
                                    case 2312899:
                                        if (str4.equals("L153")) {
                                            c8 = 21;
                                            break;
                                        }
                                        c8 = 65535;
                                        break;
                                    case 2312902:
                                        if (str4.equals("L156")) {
                                            c8 = 22;
                                            break;
                                        }
                                        c8 = 65535;
                                        break;
                                    case 2312989:
                                        if (str4.equals("L180")) {
                                            c8 = 23;
                                            break;
                                        }
                                        c8 = 65535;
                                        break;
                                    case 2312992:
                                        if (str4.equals("L183")) {
                                            c8 = 24;
                                            break;
                                        }
                                        c8 = 65535;
                                        break;
                                    case 2312995:
                                        if (str4.equals("L186")) {
                                            c8 = 25;
                                            break;
                                        }
                                        c8 = 65535;
                                        break;
                                    default:
                                        c8 = 65535;
                                        break;
                                }
                                switch (c8) {
                                    case 0:
                                        valueOf = 2;
                                        break;
                                    case 1:
                                        valueOf = 8;
                                        break;
                                    case 2:
                                        valueOf = 32;
                                        break;
                                    case 3:
                                        valueOf = valueOf6;
                                        break;
                                    case 4:
                                        valueOf = valueOf4;
                                        break;
                                    case 5:
                                        valueOf = 1;
                                        break;
                                    case 6:
                                        valueOf = 4;
                                        break;
                                    case 7:
                                        valueOf = 16;
                                        break;
                                    case '\b':
                                        valueOf = 64;
                                        break;
                                    case '\t':
                                        valueOf = valueOf5;
                                        break;
                                    case '\n':
                                        valueOf = valueOf2;
                                        break;
                                    case 11:
                                        valueOf = 8192;
                                        break;
                                    case '\f':
                                        valueOf = Integer.valueOf(PeerConnection.PORTALLOCATOR_ENABLE_ANY_ADDRESS_PORTS);
                                        break;
                                    case '\r':
                                        valueOf = Integer.valueOf(KeyCommandDescriptor.ModifierFlags.SHIFT);
                                        break;
                                    case 14:
                                        valueOf = Integer.valueOf(KeyCommandDescriptor.ModifierFlags.ALTERNATE);
                                        break;
                                    case 15:
                                        valueOf = Integer.valueOf(KeyCommandDescriptor.ModifierFlags.NUMERIC_PAD);
                                        break;
                                    case 16:
                                        valueOf = 8388608;
                                        break;
                                    case 17:
                                        valueOf = 33554432;
                                        break;
                                    case 19:
                                        valueOf = valueOf3;
                                        break;
                                    case 20:
                                        valueOf = 16384;
                                        break;
                                    case 21:
                                        valueOf = Integer.valueOf(KeyCommandDescriptor.ModifierFlags.ALPHA_SHIFT);
                                        break;
                                    case 22:
                                        valueOf = Integer.valueOf(KeyCommandDescriptor.ModifierFlags.CONTROL);
                                        break;
                                    case 23:
                                        valueOf = Integer.valueOf(KeyCommandDescriptor.ModifierFlags.COMMAND);
                                        break;
                                    case 24:
                                        valueOf = 4194304;
                                        break;
                                    case 25:
                                        valueOf = Integer.valueOf(PointerEventHelper.X_FLAG_SUPPORTS_HOVER);
                                        break;
                                }
                                if (valueOf == null) {
                                    break;
                                } else {
                                    a3.e.x("Unknown HEVC level string: ", str4, "MediaCodecUtil");
                                    break;
                                }
                            }
                            valueOf = null;
                            if (valueOf == null) {
                            }
                        }
                    }
                    break;
                case 5:
                    if (split.length == 3) {
                        try {
                            if ("audio/mp4a-latm".equals(ke.o.e(Integer.parseInt(split[1], 16)))) {
                                int parseInt6 = Integer.parseInt(split[2]);
                                int i17 = 17;
                                if (parseInt6 != 17) {
                                    if (parseInt6 != 20) {
                                        i17 = 23;
                                        if (parseInt6 != 23) {
                                            i17 = 29;
                                            if (parseInt6 != 29) {
                                                i17 = 39;
                                                if (parseInt6 != 39) {
                                                    i17 = 42;
                                                    if (parseInt6 != 42) {
                                                        switch (parseInt6) {
                                                            case 1:
                                                                i14 = 1;
                                                                break;
                                                            case 2:
                                                                i14 = 2;
                                                                break;
                                                            case 3:
                                                                i14 = 3;
                                                                break;
                                                            case 4:
                                                                i14 = 4;
                                                                break;
                                                            case 5:
                                                                i14 = 5;
                                                                break;
                                                            case 6:
                                                                i14 = 6;
                                                                break;
                                                            default:
                                                                i14 = -1;
                                                                break;
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                    if (i14 != -1) {
                                        break;
                                    }
                                }
                                i14 = i17;
                                if (i14 != -1) {
                                }
                            }
                        } catch (NumberFormatException unused3) {
                            a3.e.x("Ignoring malformed MP4A codec string: ", str2, "MediaCodecUtil");
                            break;
                        }
                    } else {
                        a3.e.x("Ignoring malformed MP4A codec string: ", str2, "MediaCodecUtil");
                        break;
                    }
                    break;
                case 6:
                    if (split.length < 3) {
                        a3.e.x("Ignoring malformed VP9 codec string: ", str2, "MediaCodecUtil");
                        break;
                    } else {
                        try {
                            int parseInt7 = Integer.parseInt(split[1]);
                            int parseInt8 = Integer.parseInt(split[2]);
                            int i18 = parseInt7 != 0 ? parseInt7 != 1 ? parseInt7 != 2 ? parseInt7 != 3 ? -1 : 8 : 4 : 2 : 1;
                            if (i18 != -1) {
                                if (parseInt8 == 10) {
                                    i13 = 1;
                                } else if (parseInt8 == 11) {
                                    i13 = 2;
                                } else if (parseInt8 == 20) {
                                    i13 = 4;
                                } else if (parseInt8 == 21) {
                                    i13 = 8;
                                } else if (parseInt8 == 30) {
                                    i13 = 16;
                                } else if (parseInt8 == 31) {
                                    i13 = 32;
                                } else if (parseInt8 == 40) {
                                    i13 = 64;
                                } else if (parseInt8 == 41) {
                                    i13 = IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
                                } else if (parseInt8 == 50) {
                                    i13 = IntBufferBatchMountItem.INSTRUCTION_UPDATE_EVENT_EMITTER;
                                } else if (parseInt8 != 51) {
                                    switch (parseInt8) {
                                        case ChatViewRecyclerTypes.GIFT_INTENT /* 60 */:
                                            i13 = RecyclerView.ItemAnimator.FLAG_MOVED;
                                            break;
                                        case 61:
                                            i13 = RecyclerView.ItemAnimator.FLAG_APPEARED_IN_PRE_LAYOUT;
                                            break;
                                        case 62:
                                            i13 = 8192;
                                            break;
                                        default:
                                            i13 = -1;
                                            break;
                                    }
                                } else {
                                    i13 = IntBufferBatchMountItem.INSTRUCTION_UPDATE_PADDING;
                                }
                                if (i13 != -1) {
                                    break;
                                } else {
                                    com.discord.chat.bridge.botuikit.a.q(parseInt8, "Unknown VP9 level: ", "MediaCodecUtil");
                                    break;
                                }
                            } else {
                                com.discord.chat.bridge.botuikit.a.q(parseInt7, "Unknown VP9 profile: ", "MediaCodecUtil");
                                break;
                            }
                        } catch (NumberFormatException unused4) {
                            a3.e.x("Ignoring malformed VP9 codec string: ", str2, "MediaCodecUtil");
                            return null;
                        }
                    }
            }
            return null;
        }
        if (split.length < 3) {
            a3.e.x("Ignoring malformed Dolby Vision codec string: ", str2, "MediaCodecUtil");
            return null;
        }
        Matcher matcher2 = pattern.matcher(split[1]);
        if (!matcher2.matches()) {
            a3.e.x("Ignoring malformed Dolby Vision codec string: ", str2, "MediaCodecUtil");
            return null;
        }
        String group2 = matcher2.group(1);
        if (group2 == null) {
            z5 = true;
        } else {
            z5 = true;
            switch (group2.hashCode()) {
                case 1536:
                    if (group2.equals("00")) {
                        c10 = 0;
                        break;
                    }
                    c10 = 65535;
                    break;
                case 1537:
                    if (group2.equals("01")) {
                        c10 = 1;
                        break;
                    }
                    c10 = 65535;
                    break;
                case 1538:
                    if (group2.equals("02")) {
                        c10 = 2;
                        break;
                    }
                    c10 = 65535;
                    break;
                case 1539:
                    if (group2.equals("03")) {
                        c10 = 3;
                        break;
                    }
                    c10 = 65535;
                    break;
                case 1540:
                    if (group2.equals("04")) {
                        c10 = 4;
                        break;
                    }
                    c10 = 65535;
                    break;
                case 1541:
                    if (group2.equals("05")) {
                        c10 = 5;
                        break;
                    }
                    c10 = 65535;
                    break;
                case 1542:
                    if (group2.equals("06")) {
                        c10 = 6;
                        break;
                    }
                    c10 = 65535;
                    break;
                case 1543:
                    if (group2.equals("07")) {
                        c10 = 7;
                        break;
                    }
                    c10 = 65535;
                    break;
                case 1544:
                    if (group2.equals("08")) {
                        c10 = '\b';
                        break;
                    }
                    c10 = 65535;
                    break;
                case 1545:
                    if (group2.equals("09")) {
                        c10 = '\t';
                        break;
                    }
                    c10 = 65535;
                    break;
                default:
                    c10 = 65535;
                    break;
            }
            switch (c10) {
                case 0:
                    num = 1;
                    break;
                case 1:
                    num = 2;
                    break;
                case 2:
                    num = 4;
                    break;
                case 3:
                    num = 8;
                    break;
                case 4:
                    num = 16;
                    break;
                case 5:
                    num = 32;
                    break;
                case 6:
                    num = 64;
                    break;
                case 7:
                    num = valueOf6;
                    break;
                case '\b':
                    num = valueOf5;
                    break;
                case '\t':
                    num = valueOf4;
                    break;
            }
            if (num != null) {
                a3.e.x("Unknown Dolby Vision profile string: ", group2, "MediaCodecUtil");
                return null;
            }
            String str5 = split[2];
            if (str5 != null) {
                switch (str5.hashCode()) {
                    case 1537:
                        if (str5.equals("01")) {
                            r12 = 0;
                            break;
                        }
                        r12 = -1;
                        break;
                    case 1538:
                        if (str5.equals("02")) {
                            r12 = z5;
                            break;
                        }
                        r12 = -1;
                        break;
                    case 1539:
                        if (str5.equals("03")) {
                            r12 = 2;
                            break;
                        }
                        r12 = -1;
                        break;
                    case 1540:
                        if (str5.equals("04")) {
                            r12 = 3;
                            break;
                        }
                        r12 = -1;
                        break;
                    case 1541:
                        if (str5.equals("05")) {
                            r12 = 4;
                            break;
                        }
                        r12 = -1;
                        break;
                    case 1542:
                        if (str5.equals("06")) {
                            r12 = 5;
                            break;
                        }
                        r12 = -1;
                        break;
                    case 1543:
                        if (str5.equals("07")) {
                            r12 = 6;
                            break;
                        }
                        r12 = -1;
                        break;
                    case 1544:
                        if (str5.equals("08")) {
                            r12 = 7;
                            break;
                        }
                        r12 = -1;
                        break;
                    case 1545:
                        if (str5.equals("09")) {
                            r12 = 8;
                            break;
                        }
                        r12 = -1;
                        break;
                    case 1567:
                        if (str5.equals("10")) {
                            r12 = 9;
                            break;
                        }
                        r12 = -1;
                        break;
                    case 1568:
                        if (str5.equals("11")) {
                            r12 = 10;
                            break;
                        }
                        r12 = -1;
                        break;
                    case 1569:
                        if (str5.equals("12")) {
                            r12 = 11;
                            break;
                        }
                        r12 = -1;
                        break;
                    case 1570:
                        if (str5.equals("13")) {
                            r12 = 12;
                            break;
                        }
                        r12 = -1;
                        break;
                    default:
                        r12 = -1;
                        break;
                }
                switch (r12) {
                    case 0:
                        valueOf = 1;
                        break;
                    case 1:
                        valueOf = 2;
                        break;
                    case 2:
                        valueOf = 4;
                        break;
                    case 3:
                        valueOf = 8;
                        break;
                    case 4:
                        valueOf = 16;
                        break;
                    case 5:
                        valueOf = 32;
                        break;
                    case 6:
                        valueOf = 64;
                        break;
                    case 7:
                        valueOf = valueOf6;
                        break;
                    case 8:
                        valueOf = valueOf5;
                        break;
                    case 9:
                        valueOf = valueOf4;
                        break;
                    case 11:
                        valueOf = valueOf2;
                        break;
                    case 12:
                        valueOf = valueOf3;
                        break;
                }
                if (valueOf == null) {
                    return new Pair(num, valueOf);
                }
                a3.e.x("Unknown Dolby Vision level string: ", str5, "MediaCodecUtil");
                return null;
            }
            valueOf = null;
            if (valueOf == null) {
            }
        }
        num = null;
        if (num != null) {
        }
        return null;
    }

    public static synchronized List e(String str, boolean z5, boolean z6) {
        synchronized (z.class) {
            try {
                v vVar = new v(str, z5, z6);
                HashMap hashMap = f3487b;
                List list = (List) hashMap.get(vVar);
                if (list != null) {
                    return list;
                }
                int i5 = d0.a;
                ArrayList f2 = f(vVar, i5 >= 21 ? new a0(z5, z6) : new qa.s());
                if (z5 && f2.isEmpty() && 21 <= i5 && i5 <= 23) {
                    f2 = f(vVar, new qa.s());
                    if (!f2.isEmpty()) {
                        ke.b.N("MediaCodecUtil", "MediaCodecList API didn't list secure decoder for: " + str + ". Assuming: " + ((o) f2.get(0)).a);
                    }
                }
                a(str, f2);
                e0 k = e0.k(f2);
                hashMap.put(vVar, k);
                return k;
            } catch (Throwable th2) {
                throw th2;
            }
        }
    }

    public static ArrayList f(v vVar, x xVar) {
        String c6;
        String str;
        String str2;
        o h6;
        v vVar2 = vVar;
        boolean z5 = vVar2.f3485b;
        try {
            ArrayList arrayList = new ArrayList();
            String str3 = vVar2.a;
            int q5 = xVar.q();
            boolean u5 = xVar.u();
            int i5 = 0;
            while (i5 < q5) {
                MediaCodecInfo b10 = xVar.b(i5);
                int i6 = d0.a;
                if (i6 < 29 || !b10.isAlias()) {
                    String name = b10.getName();
                    if (g(b10, name, u5, str3) && (c6 = c(b10, name, str3)) != null) {
                        try {
                            MediaCodecInfo.CodecCapabilities capabilitiesForType = b10.getCapabilitiesForType(c6);
                            boolean h7 = xVar.h("tunneled-playback", c6, capabilitiesForType);
                            boolean p3 = xVar.p("tunneled-playback", capabilitiesForType);
                            boolean z6 = vVar2.f3486c;
                            if ((z6 || !p3) && (!z6 || h7)) {
                                boolean h10 = xVar.h("secure-playback", c6, capabilitiesForType);
                                boolean p5 = xVar.p("secure-playback", capabilitiesForType);
                                if ((z5 || !p5) && (!z5 || h10)) {
                                    boolean isHardwareAccelerated = i6 >= 29 ? b10.isHardwareAccelerated() : !h(b10, str3);
                                    h(b10, str3);
                                    if (i6 >= 29) {
                                        b10.isVendor();
                                    } else {
                                        String x5 = tn.g.x(b10.getName());
                                        if (!x5.startsWith("omx.google.") && !x5.startsWith("c2.android.")) {
                                            x5.startsWith("c2.google.");
                                        }
                                    }
                                    if (!(u5 && z5 == h10) && (u5 || z5)) {
                                        boolean z7 = isHardwareAccelerated;
                                        str2 = name;
                                        if (!u5 && h10) {
                                            str = c6;
                                            try {
                                                arrayList.add(o.h(str2 + ".secure", str3, str, capabilitiesForType, z7, true));
                                                break;
                                            } catch (Exception e9) {
                                                e = e9;
                                                if (d0.a <= 23 || arrayList.isEmpty()) {
                                                    ke.b.r("MediaCodecUtil", "Failed to query codec " + str2 + " (" + str + ")");
                                                    throw e;
                                                }
                                                ke.b.r("MediaCodecUtil", "Skipping codec " + str2 + " (failed to query capabilities)");
                                                i5++;
                                                vVar2 = vVar;
                                            }
                                        }
                                    } else {
                                        str = c6;
                                        try {
                                            h6 = o.h(name, str3, str, capabilitiesForType, isHardwareAccelerated, false);
                                            str2 = name;
                                        } catch (Exception e10) {
                                            e = e10;
                                            str2 = name;
                                        }
                                        try {
                                            arrayList.add(h6);
                                        } catch (Exception e11) {
                                            e = e11;
                                            str = str;
                                            if (d0.a <= 23) {
                                            }
                                            ke.b.r("MediaCodecUtil", "Failed to query codec " + str2 + " (" + str + ")");
                                            throw e;
                                        }
                                    }
                                }
                            }
                        } catch (Exception e12) {
                            e = e12;
                            str = c6;
                            str2 = name;
                        }
                    }
                }
                i5++;
                vVar2 = vVar;
            }
            return arrayList;
        } catch (Exception e13) {
            throw new w("Failed to query underlying media codecs", e13);
        }
    }

    public static boolean g(MediaCodecInfo mediaCodecInfo, String str, boolean z5, String str2) {
        if (mediaCodecInfo.isEncoder()) {
            return false;
        }
        if (!z5 && str.endsWith(".secure")) {
            return false;
        }
        int i5 = d0.a;
        if (i5 < 21 && ("CIPAACDecoder".equals(str) || "CIPMP3Decoder".equals(str) || "CIPVorbisDecoder".equals(str) || "CIPAMRNBDecoder".equals(str) || "AACDecoder".equals(str) || "MP3Decoder".equals(str))) {
            return false;
        }
        if (i5 < 18 && "OMX.MTK.AUDIO.DECODER.AAC".equals(str)) {
            String str3 = d0.f13294b;
            if ("a70".equals(str3)) {
                return false;
            }
            if ("Xiaomi".equals(d0.f13295c) && str3.startsWith("HM")) {
                return false;
            }
        }
        if (i5 == 16 && "OMX.qcom.audio.decoder.mp3".equals(str)) {
            String str4 = d0.f13294b;
            if ("dlxu".equals(str4) || "protou".equals(str4) || "ville".equals(str4) || "villeplus".equals(str4) || "villec2".equals(str4) || str4.startsWith("gee") || "C6602".equals(str4) || "C6603".equals(str4) || "C6606".equals(str4) || "C6616".equals(str4) || "L36h".equals(str4) || "SO-02E".equals(str4)) {
                return false;
            }
        }
        if (i5 == 16 && "OMX.qcom.audio.decoder.aac".equals(str)) {
            String str5 = d0.f13294b;
            if ("C1504".equals(str5) || "C1505".equals(str5) || "C1604".equals(str5) || "C1605".equals(str5)) {
                return false;
            }
        }
        if (i5 < 24 && (("OMX.SEC.aac.dec".equals(str) || "OMX.Exynos.AAC.Decoder".equals(str)) && "samsung".equals(d0.f13295c))) {
            String str6 = d0.f13294b;
            if (str6.startsWith("zeroflte") || str6.startsWith("zerolte") || str6.startsWith("zenlte") || "SC-05G".equals(str6) || "marinelteatt".equals(str6) || "404SC".equals(str6) || "SC-04G".equals(str6) || "SCV31".equals(str6)) {
                return false;
            }
        }
        if (i5 <= 19 && "OMX.SEC.vp8.dec".equals(str) && "samsung".equals(d0.f13295c)) {
            String str7 = d0.f13294b;
            if (str7.startsWith("d2") || str7.startsWith("serrano") || str7.startsWith("jflte") || str7.startsWith("santos") || str7.startsWith("t0")) {
                return false;
            }
        }
        if (i5 <= 19 && d0.f13294b.startsWith("jflte") && "OMX.qcom.video.decoder.vp8".equals(str)) {
            return false;
        }
        return (i5 <= 23 && "audio/eac3-joc".equals(str2) && "OMX.MTK.AUDIO.DECODER.DSPAC3".equals(str)) ? false : true;
    }

    public static boolean h(MediaCodecInfo mediaCodecInfo, String str) {
        if (d0.a >= 29) {
            return mediaCodecInfo.isSoftwareOnly();
        }
        if (ke.o.j(str)) {
            return true;
        }
        String x5 = tn.g.x(mediaCodecInfo.getName());
        if (x5.startsWith("arc.")) {
            return false;
        }
        if (x5.startsWith("omx.google.") || x5.startsWith("omx.ffmpeg.")) {
            return true;
        }
        if ((x5.startsWith("omx.sec.") && x5.contains(".sw.")) || x5.equals("omx.qcom.video.decoder.hevcswvdec") || x5.startsWith("c2.android.") || x5.startsWith("c2.google.")) {
            return true;
        }
        return (x5.startsWith("omx.") || x5.startsWith("c2.")) ? false : true;
    }

    public static int i() {
        MediaCodecInfo.CodecProfileLevel[] codecProfileLevelArr;
        int i5;
        if (f3488c == -1) {
            int i6 = 0;
            List e9 = e("video/avc", false, false);
            o oVar = e9.isEmpty() ? null : (o) e9.get(0);
            if (oVar != null) {
                MediaCodecInfo.CodecCapabilities codecCapabilities = oVar.f3443d;
                if (codecCapabilities == null || (codecProfileLevelArr = codecCapabilities.profileLevels) == null) {
                    codecProfileLevelArr = new MediaCodecInfo.CodecProfileLevel[0];
                }
                int length = codecProfileLevelArr.length;
                int i10 = 0;
                while (i6 < length) {
                    int i11 = codecProfileLevelArr[i6].level;
                    if (i11 != 1 && i11 != 2) {
                        switch (i11) {
                            case 8:
                            case 16:
                            case 32:
                                i5 = 101376;
                                break;
                            case 64:
                                i5 = 202752;
                                break;
                            case IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT /* 128 */:
                            case IntBufferBatchMountItem.INSTRUCTION_UPDATE_EVENT_EMITTER /* 256 */:
                                i5 = 414720;
                                break;
                            case IntBufferBatchMountItem.INSTRUCTION_UPDATE_PADDING /* 512 */:
                                i5 = 921600;
                                break;
                            case IntBufferBatchMountItem.INSTRUCTION_UPDATE_OVERFLOW_INSET /* 1024 */:
                                i5 = 1310720;
                                break;
                            case RecyclerView.ItemAnimator.FLAG_MOVED /* 2048 */:
                            case RecyclerView.ItemAnimator.FLAG_APPEARED_IN_PRE_LAYOUT /* 4096 */:
                                i5 = KeyCommandDescriptor.ModifierFlags.NUMERIC_PAD;
                                break;
                            case 8192:
                                i5 = 2228224;
                                break;
                            case 16384:
                                i5 = 5652480;
                                break;
                            case PeerConnection.PORTALLOCATOR_ENABLE_ANY_ADDRESS_PORTS /* 32768 */:
                            case KeyCommandDescriptor.ModifierFlags.ALPHA_SHIFT /* 65536 */:
                                i5 = 9437184;
                                break;
                            case KeyCommandDescriptor.ModifierFlags.SHIFT /* 131072 */:
                            case KeyCommandDescriptor.ModifierFlags.CONTROL /* 262144 */:
                            case KeyCommandDescriptor.ModifierFlags.ALTERNATE /* 524288 */:
                                i5 = 35651584;
                                break;
                            default:
                                i5 = -1;
                                break;
                        }
                    } else {
                        i5 = 25344;
                    }
                    i10 = Math.max(i5, i10);
                    i6++;
                }
                i6 = Math.max(i10, d0.a >= 21 ? 345600 : 172800);
            }
            f3488c = i6;
        }
        return f3488c;
    }
}
