package cd;

import android.graphics.Point;
import android.media.MediaCodecInfo;
import android.util.Pair;
import androidx.recyclerview.widget.RecyclerView;
import com.facebook.react.fabric.mounting.mountitems.IntBufferBatchMountItem;
import com.google.android.exoplayer2.Format;
import com.google.android.exoplayer2.decoder.DecoderReuseEvaluation;
import ke.d0;

/* loaded from: classes3.dex */
public final class o {
    public final String a;

    /* renamed from: b, reason: collision with root package name */
    public final String f3441b;

    /* renamed from: c, reason: collision with root package name */
    public final String f3442c;

    /* renamed from: d, reason: collision with root package name */
    public final MediaCodecInfo.CodecCapabilities f3443d;

    /* renamed from: e, reason: collision with root package name */
    public final boolean f3444e;

    /* renamed from: f, reason: collision with root package name */
    public final boolean f3445f;

    /* renamed from: g, reason: collision with root package name */
    public final boolean f3446g;

    /* renamed from: h, reason: collision with root package name */
    public final boolean f3447h;

    public o(String str, String str2, String str3, MediaCodecInfo.CodecCapabilities codecCapabilities, boolean z5, boolean z6, boolean z7) {
        str.getClass();
        this.a = str;
        this.f3441b = str2;
        this.f3442c = str3;
        this.f3443d = codecCapabilities;
        this.f3446g = z5;
        this.f3444e = z6;
        this.f3445f = z7;
        this.f3447h = ke.o.l(str2);
    }

    public static boolean a(MediaCodecInfo.VideoCapabilities videoCapabilities, int i5, int i6, double d6) {
        int widthAlignment = videoCapabilities.getWidthAlignment();
        int heightAlignment = videoCapabilities.getHeightAlignment();
        Point point = new Point(d0.f(i5, widthAlignment) * widthAlignment, d0.f(i6, heightAlignment) * heightAlignment);
        int i10 = point.x;
        int i11 = point.y;
        return (d6 == -1.0d || d6 < 1.0d) ? videoCapabilities.isSizeSupported(i10, i11) : videoCapabilities.areSizeAndRateSupported(i10, i11, Math.floor(d6));
    }

    /* JADX WARN: Code restructure failed: missing block: B:12:0x0028, code lost:
    
        if ("Nexus 10".equals(r3) == false) goto L19;
     */
    /* JADX WARN: Code restructure failed: missing block: B:16:0x0038, code lost:
    
        if ("OMX.Exynos.AVC.Decoder.secure".equals(r8) == false) goto L19;
     */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public static o h(String str, String str2, String str3, MediaCodecInfo.CodecCapabilities codecCapabilities, boolean z5, boolean z6) {
        boolean z7;
        boolean z8;
        String str4;
        String str5;
        MediaCodecInfo.CodecCapabilities codecCapabilities2;
        boolean z10;
        String str6;
        int i5;
        if (codecCapabilities != null && (i5 = d0.a) >= 19 && codecCapabilities.isFeatureSupported("adaptive-playback")) {
            if (i5 <= 22) {
                String str7 = d0.f13296d;
                if (!"ODROID-XU3".equals(str7)) {
                }
                if (!"OMX.Exynos.AVC.Decoder".equals(str)) {
                }
            }
            z7 = true;
            if (codecCapabilities != null && d0.a >= 21) {
                codecCapabilities.isFeatureSupported("tunneled-playback");
            }
            if (!z6 || (codecCapabilities != null && d0.a >= 21 && codecCapabilities.isFeatureSupported("secure-playback"))) {
                z8 = true;
                str4 = str;
                str5 = str3;
                codecCapabilities2 = codecCapabilities;
                z10 = z5;
                str6 = str2;
            } else {
                z8 = false;
                str6 = str2;
                str5 = str3;
                codecCapabilities2 = codecCapabilities;
                z10 = z5;
                str4 = str;
            }
            return new o(str4, str6, str5, codecCapabilities2, z10, z7, z8);
        }
        z7 = false;
        if (codecCapabilities != null) {
            codecCapabilities.isFeatureSupported("tunneled-playback");
        }
        if (z6) {
        }
        z8 = true;
        str4 = str;
        str5 = str3;
        codecCapabilities2 = codecCapabilities;
        z10 = z5;
        str6 = str2;
        return new o(str4, str6, str5, codecCapabilities2, z10, z7, z8);
    }

    public final DecoderReuseEvaluation b(Format format, Format format2) {
        Format format3;
        Format format4;
        int i5 = !d0.a(format.I, format2.I) ? 8 : 0;
        if (this.f3447h) {
            if (format.Q != format2.Q) {
                i5 |= IntBufferBatchMountItem.INSTRUCTION_UPDATE_OVERFLOW_INSET;
            }
            if (!this.f3444e && (format.N != format2.N || format.O != format2.O)) {
                i5 |= IntBufferBatchMountItem.INSTRUCTION_UPDATE_PADDING;
            }
            if (!d0.a(format.U, format2.U)) {
                i5 |= RecyclerView.ItemAnimator.FLAG_MOVED;
            }
            if (d0.f13296d.startsWith("SM-T230") && "OMX.MARVELL.VIDEO.HW.CODA7542DECODER".equals(this.a) && !format.b(format2)) {
                i5 |= 2;
            }
            if (i5 == 0) {
                return new DecoderReuseEvaluation(this.a, format, format2, format.b(format2) ? 3 : 2, 0);
            }
            format3 = format;
            format4 = format2;
        } else {
            format3 = format;
            format4 = format2;
            if (format3.V != format4.V) {
                i5 |= RecyclerView.ItemAnimator.FLAG_APPEARED_IN_PRE_LAYOUT;
            }
            if (format3.W != format4.W) {
                i5 |= 8192;
            }
            if (format3.X != format4.X) {
                i5 |= 16384;
            }
            String str = this.f3441b;
            if (i5 == 0 && "audio/mp4a-latm".equals(str)) {
                Pair d6 = z.d(format3);
                Pair d7 = z.d(format4);
                if (d6 != null && d7 != null) {
                    int intValue = ((Integer) d6.first).intValue();
                    int intValue2 = ((Integer) d7.first).intValue();
                    if (intValue == 42 && intValue2 == 42) {
                        return new DecoderReuseEvaluation(this.a, format3, format4, 3, 0);
                    }
                }
            }
            if (!format3.b(format4)) {
                i5 |= 32;
            }
            if ("audio/opus".equals(str)) {
                i5 |= 2;
            }
            if (i5 == 0) {
                return new DecoderReuseEvaluation(this.a, format3, format4, 1, 0);
            }
        }
        return new DecoderReuseEvaluation(this.a, format3, format4, 0, i5);
    }

    public final boolean c(Format format, boolean z5) {
        MediaCodecInfo.CodecProfileLevel[] codecProfileLevelArr;
        MediaCodecInfo.VideoCapabilities videoCapabilities;
        Pair d6 = z.d(format);
        if (d6 != null) {
            int intValue = ((Integer) d6.first).intValue();
            int intValue2 = ((Integer) d6.second).intValue();
            boolean equals = "video/dolby-vision".equals(format.I);
            int i5 = 8;
            String str = this.f3441b;
            if (equals) {
                if ("video/avc".equals(str)) {
                    intValue = 8;
                } else if ("video/hevc".equals(str)) {
                    intValue = 2;
                }
                intValue2 = 0;
            }
            if (this.f3447h || intValue == 42) {
                MediaCodecInfo.CodecCapabilities codecCapabilities = this.f3443d;
                if (codecCapabilities == null || (codecProfileLevelArr = codecCapabilities.profileLevels) == null) {
                    codecProfileLevelArr = new MediaCodecInfo.CodecProfileLevel[0];
                }
                if (d0.a <= 23 && "video/x-vnd.on2.vp9".equals(str) && codecProfileLevelArr.length == 0) {
                    int intValue3 = (codecCapabilities == null || (videoCapabilities = codecCapabilities.getVideoCapabilities()) == null) ? 0 : videoCapabilities.getBitrateRange().getUpper().intValue();
                    if (intValue3 >= 180000000) {
                        i5 = IntBufferBatchMountItem.INSTRUCTION_UPDATE_OVERFLOW_INSET;
                    } else if (intValue3 >= 120000000) {
                        i5 = IntBufferBatchMountItem.INSTRUCTION_UPDATE_PADDING;
                    } else if (intValue3 >= 60000000) {
                        i5 = IntBufferBatchMountItem.INSTRUCTION_UPDATE_EVENT_EMITTER;
                    } else if (intValue3 >= 30000000) {
                        i5 = IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
                    } else if (intValue3 >= 18000000) {
                        i5 = 64;
                    } else if (intValue3 >= 12000000) {
                        i5 = 32;
                    } else if (intValue3 >= 7200000) {
                        i5 = 16;
                    } else if (intValue3 < 3600000) {
                        i5 = intValue3 >= 1800000 ? 4 : intValue3 >= 800000 ? 2 : 1;
                    }
                    MediaCodecInfo.CodecProfileLevel codecProfileLevel = new MediaCodecInfo.CodecProfileLevel();
                    codecProfileLevel.profile = 1;
                    codecProfileLevel.level = i5;
                    codecProfileLevelArr = new MediaCodecInfo.CodecProfileLevel[]{codecProfileLevel};
                }
                for (MediaCodecInfo.CodecProfileLevel codecProfileLevel2 : codecProfileLevelArr) {
                    if (codecProfileLevel2.profile == intValue && (codecProfileLevel2.level >= intValue2 || !z5)) {
                        if ("video/hevc".equals(str) && 2 == intValue) {
                            String str2 = d0.f13294b;
                            if (!"sailfish".equals(str2) && !"marlin".equals(str2)) {
                            }
                        }
                    }
                }
                g("codec.profileLevel, " + format.F + ", " + this.f3442c);
                return false;
            }
        }
        return true;
    }

    public final boolean d(Format format) {
        String str = format.I;
        String str2 = this.f3441b;
        boolean z5 = str2.equals(str) || str2.equals(z.b(format));
        int i5 = format.O;
        int i6 = format.N;
        if (!z5 || !c(format, true)) {
            return false;
        }
        if (!this.f3447h) {
            int i10 = d0.a;
            if (i10 >= 21) {
                int i11 = format.W;
                MediaCodecInfo.CodecCapabilities codecCapabilities = this.f3443d;
                if (i11 != -1) {
                    if (codecCapabilities == null) {
                        g("sampleRate.caps");
                        return false;
                    }
                    MediaCodecInfo.AudioCapabilities audioCapabilities = codecCapabilities.getAudioCapabilities();
                    if (audioCapabilities == null) {
                        g("sampleRate.aCaps");
                        return false;
                    }
                    if (!audioCapabilities.isSampleRateSupported(i11)) {
                        g("sampleRate.support, " + i11);
                        return false;
                    }
                }
                int i12 = format.V;
                if (i12 != -1) {
                    if (codecCapabilities == null) {
                        g("channelCount.caps");
                        return false;
                    }
                    MediaCodecInfo.AudioCapabilities audioCapabilities2 = codecCapabilities.getAudioCapabilities();
                    if (audioCapabilities2 == null) {
                        g("channelCount.aCaps");
                        return false;
                    }
                    int maxInputChannelCount = audioCapabilities2.getMaxInputChannelCount();
                    if (maxInputChannelCount <= 1 && ((i10 < 26 || maxInputChannelCount <= 0) && !"audio/mpeg".equals(str2) && !"audio/3gpp".equals(str2) && !"audio/amr-wb".equals(str2) && !"audio/mp4a-latm".equals(str2) && !"audio/vorbis".equals(str2) && !"audio/opus".equals(str2) && !"audio/raw".equals(str2) && !"audio/flac".equals(str2) && !"audio/g711-alaw".equals(str2) && !"audio/g711-mlaw".equals(str2) && !"audio/gsm".equals(str2))) {
                        int i13 = "audio/ac3".equals(str2) ? 6 : "audio/eac3".equals(str2) ? 16 : 30;
                        StringBuilder s2 = a3.e.s("AssumedMaxChannelAdjustment: ", this.a, ", [", maxInputChannelCount, " to ");
                        s2.append(i13);
                        s2.append("]");
                        ke.b.N("MediaCodecInfo", s2.toString());
                        maxInputChannelCount = i13;
                    }
                    if (maxInputChannelCount < i12) {
                        g("channelCount.support, " + i12);
                        return false;
                    }
                }
            }
        } else if (i6 > 0 && i5 > 0) {
            if (d0.a >= 21) {
                return f(i6, format.P, i5);
            }
            boolean z6 = i6 * i5 <= z.i();
            if (!z6) {
                g("legacyFrameSize, " + i6 + "x" + i5);
            }
            return z6;
        }
        return true;
    }

    public final boolean e(Format format) {
        if (this.f3447h) {
            return this.f3444e;
        }
        Pair d6 = z.d(format);
        return d6 != null && ((Integer) d6.first).intValue() == 42;
    }

    public final boolean f(int i5, double d6, int i6) {
        MediaCodecInfo.CodecCapabilities codecCapabilities = this.f3443d;
        if (codecCapabilities == null) {
            g("sizeAndRate.caps");
            return false;
        }
        MediaCodecInfo.VideoCapabilities videoCapabilities = codecCapabilities.getVideoCapabilities();
        if (videoCapabilities == null) {
            g("sizeAndRate.vCaps");
            return false;
        }
        if (d0.a >= 29) {
            int a = n.a(videoCapabilities, i5, i6, d6);
            if (a == 2) {
                return true;
            }
            if (a == 1) {
                StringBuilder q5 = a3.e.q(i5, "sizeAndRate.cover, ", i6, "x", "@");
                q5.append(d6);
                g(q5.toString());
                return false;
            }
        }
        if (!a(videoCapabilities, i5, i6, d6)) {
            if (i5 < i6) {
                String str = this.a;
                if ((!"OMX.MTK.VIDEO.DECODER.HEVC".equals(str) || !"mcv5a".equals(d0.f13294b)) && a(videoCapabilities, i6, i5, d6)) {
                    StringBuilder q6 = a3.e.q(i5, "sizeAndRate.rotated, ", i6, "x", "@");
                    q6.append(d6);
                    StringBuilder t5 = a3.e.t("AssumedSupport [", q6.toString(), "] [", str, ", ");
                    t5.append(this.f3441b);
                    t5.append("] [");
                    t5.append(d0.f13297e);
                    t5.append("]");
                    ke.b.q("MediaCodecInfo", t5.toString());
                }
            }
            StringBuilder q7 = a3.e.q(i5, "sizeAndRate.support, ", i6, "x", "@");
            q7.append(d6);
            g(q7.toString());
            return false;
        }
        return true;
    }

    public final void g(String str) {
        StringBuilder m5 = com.discord.chat.bridge.botuikit.a.m("NoSupport [", str, "] [");
        m5.append(this.a);
        m5.append(", ");
        m5.append(this.f3441b);
        m5.append("] [");
        m5.append(d0.f13297e);
        m5.append("]");
        ke.b.q("MediaCodecInfo", m5.toString());
    }

    public final String toString() {
        return this.a;
    }
}
