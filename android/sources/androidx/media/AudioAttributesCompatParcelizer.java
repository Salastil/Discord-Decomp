package androidx.media;

import o3.a;
import o3.c;

/* loaded from: classes.dex */
public class AudioAttributesCompatParcelizer {
    public static AudioAttributesCompat read(a aVar) {
        AudioAttributesCompat audioAttributesCompat = new AudioAttributesCompat();
        c cVar = audioAttributesCompat.a;
        if (aVar.e(1)) {
            cVar = aVar.h();
        }
        audioAttributesCompat.a = (AudioAttributesImpl) cVar;
        return audioAttributesCompat;
    }

    public static void write(AudioAttributesCompat audioAttributesCompat, a aVar) {
        aVar.getClass();
        AudioAttributesImpl audioAttributesImpl = audioAttributesCompat.a;
        aVar.i(1);
        aVar.l(audioAttributesImpl);
    }
}
