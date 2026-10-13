package androidx.media;

import o3.a;

/* loaded from: classes.dex */
public class AudioAttributesImplBaseParcelizer {
    public static AudioAttributesImplBase read(a aVar) {
        AudioAttributesImplBase audioAttributesImplBase = new AudioAttributesImplBase();
        audioAttributesImplBase.a = aVar.f(audioAttributesImplBase.a, 1);
        audioAttributesImplBase.f2243b = aVar.f(audioAttributesImplBase.f2243b, 2);
        audioAttributesImplBase.f2244c = aVar.f(audioAttributesImplBase.f2244c, 3);
        audioAttributesImplBase.f2245d = aVar.f(audioAttributesImplBase.f2245d, 4);
        return audioAttributesImplBase;
    }

    public static void write(AudioAttributesImplBase audioAttributesImplBase, a aVar) {
        aVar.getClass();
        aVar.j(audioAttributesImplBase.a, 1);
        aVar.j(audioAttributesImplBase.f2243b, 2);
        aVar.j(audioAttributesImplBase.f2244c, 3);
        aVar.j(audioAttributesImplBase.f2245d, 4);
    }
}
